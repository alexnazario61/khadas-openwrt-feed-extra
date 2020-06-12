#
# ## hyphop ##
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=uboot-mkimage
PKG_VERSION:=2020.04
PKG_RELEASE:=1

PKG_SOURCE:=v$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=https://github.com/u-boot/u-boot/archive/
PKG_BUILD_DIR:=$(BUILD_DIR)/u-boot-$(PKG_VERSION)
PKG_HASH:=e7e7cb74bb814b9fec80fe4ede3c3f04134d8217d630e092a097238248d604f9
PKG_MAINTAINER:=hyphop

PKG_LICENSE:=GPL-2.0 GPL-2.0+
PKG_LICENSE_FILES:=Licenses/README

include $(INCLUDE_DIR)/package.mk

define Package/uboot-mkimage
  SECTION:=utils
  CATEGORY:=Utilities
  SUBMENU:=Boot Loaders
  TITLE:=uboot images tool mkimage mkenvimage
  URL:=http://www.denx.de/wiki/U-Boot
endef

define Package/uboot-envtools/description
 This package includes uboot images tools mkimage + mkenvimage
endef

define Build/Configure
	touch $(PKG_BUILD_DIR)/include/config.h
	mkdir -p $(PKG_BUILD_DIR)/include/config
	touch $(PKG_BUILD_DIR)/include/config/auto.conf
	mkdir -p $(PKG_BUILD_DIR)/include/generated
	touch $(PKG_BUILD_DIR)/include/generated/autoconf.h
endef

TARGET_CFLAGS += -I$(STAGING_DIR)/usr/include

#	HOSTCFLAGS="" \

define Build/Compile
       +$(MAKE_VARS) \
	$(MAKE) -C $(PKG_BUILD_DIR) \
	HOSTLDFLAGS="" \
	CROSS_COMPILE="$(TARGET_CROSS)" \
	TARGET_CFLAGS="$(TARGET_CFLAGS)" \
	CROSS_BUILD_TOOLS=y \
	no-dot-config-targets=tools-only \
	tools-only
endef

define Package/uboot-mkimage/install
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/tools/mkimage    $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/tools/mkenvimage $(1)/usr/sbin
endef

$(eval $(call BuildPackage,uboot-mkimage))
