# ## hyphop ##
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=uinput
PKG_RELEASE:=1

PKG_LICENSE:=GPL-2.0+

PKG_MAINTAINER:=hyphop

include $(INCLUDE_DIR)/package.mk

define Package/uinput
  SECTION:=utils
  CATEGORY:=Utilities
  SUBMENU:=user event
#  DEPENDS:=+libubox +libubus
  TITLE:=uinput
endef

define Package/uinput/description
  This package contains an cgi utility that is useful for up/downloading files
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
	ls -l1 
endef

define Package/uinput/install
	$(STRIP) $(PKG_BUILD_DIR)/uinput
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/uinput $(1)/usr/bin
endef

$(eval $(call BuildPackage,uinput))
