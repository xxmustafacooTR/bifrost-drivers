# SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note
#
# (C) COPYRIGHT 2023 ARM Limited. All rights reserved.
#
# This program is free software and is provided to you under the terms of the
# GNU General Public License version 2 as published by the Free Software
# Foundation, and any use by you of this program is subject to the terms
# of such GNU license.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, you can access it online at
# http://www.gnu.org/licenses/gpl-2.0.html.
#
#

KERNEL_SRC ?= /lib/modules/$(shell uname -r)/build
KDIR ?= $(KERNEL_SRC)
M ?= $(shell pwd)

ifeq ($(KDIR),)
    $(error Must specify KDIR to point to the kernel to target))
endif

CONFIGS :=

ifeq ($(MALI_KCONFIG_EXT_PREFIX),)
    ifeq ($(CONFIG_XEN), y)
        ifeq ($(CONFIG_MALI_ARBITER_SUPPORT),y)
            CONFIG_MALI_XEN ?= y
        endif
    endif

    CONFIGS += \
        CONFIG_MALI_XEN
endif

#
# MAKE_ARGS to pass the custom CONFIGs on out-of-tree build
#
# Generate the list of CONFIGs and values.
# $(value config) is the name of the CONFIG option.
# $(value $(value config)) is its value (y, m).
# When the CONFIG is not set to y or m, it defaults to n.
MAKE_ARGS := $(foreach config,$(CONFIGS), \
                    $(if $(filter y m,$(value $(value config))), \
                        $(value config)=$(value $(value config)), \
                        $(value config)=n))

#
# EXTRA_CFLAGS to define the custom CONFIGs on out-of-tree build
#
# Generate the list of CONFIGs defines with values from CONFIGS.
# $(value config) is the name of the CONFIG option.
# When set to y or m, the CONFIG gets defined to 1.
EXTRA_CFLAGS := $(foreach config,$(CONFIGS), \
                    $(if $(filter y m,$(value $(value config))), \
                        -D$(value config)=1))

# The following were added to align with W=1 in scripts/Makefile.extrawarn
# from the Linux source tree
CFLAGS_MODULE += -Wall -Werror
CFLAGS_MODULE += -Wextra -Wunused -Wno-unused-parameter
CFLAGS_MODULE += -Wmissing-declarations
CFLAGS_MODULE += -Wmissing-format-attribute
CFLAGS_MODULE += -Wmissing-prototypes
CFLAGS_MODULE += -Wold-style-definition
CFLAGS_MODULE += -Wmissing-include-dirs
CFLAGS_MODULE += $(call cc-option, -Wunused-but-set-variable)
CFLAGS_MODULE += $(call cc-option, -Wunused-const-variable)
CFLAGS_MODULE += $(call cc-option, -Wpacked-not-aligned)
CFLAGS_MODULE += $(call cc-option, -Wstringop-truncation)
# The following turn off the warnings enabled by -Wextra
CFLAGS_MODULE += -Wno-missing-field-initializers
CFLAGS_MODULE += -Wno-sign-compare
CFLAGS_MODULE += -Wno-type-limits
# The following ensures the stack frame does not get larger than a page
CFLAGS_MODULE += -Wframe-larger-than=4096

KBUILD_CPPFLAGS += -DKBUILD_EXTRA_WARN1

all:
	$(MAKE) -C $(KDIR) M=$(M) $(MAKE_ARGS) EXTRA_CFLAGS="$(EXTRA_CFLAGS)" KBUILD_EXTRA_SYMBOLS="$(EXTRA_SYMBOLS)" modules

modules_install:
	$(MAKE) -C $(KDIR) M=$(M) $(MAKE_ARGS) modules_install

clean:
	$(MAKE) -C $(KDIR) M=$(M) $(MAKE_ARGS) clean
