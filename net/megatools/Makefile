# ## hyphop ##
#
#

include $(TOPDIR)/rules.mk

PKG_NAME:=megatools
PKG_VERSION:=1.11.0-git-20190608
#PKG_VERSION:=1.11.0-git-20191107

#PKG_VERSION:=1.11.0-git-20200503

PKG_MAINTAINER:=hyphop <art@khadas.com>

PKG_INSTALL:=1
PKG_BUILD_PARALLEL:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=https://megatools.megous.com/builds/experimental/

PKG_SOURCE_URL=https://codeload.github.com/hyphop/megatoolz/tar.gz/$(PKG_VERSION)?
PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_BUILD_DIR:=$(BUILD_DIR)/megatoolz-$(PKG_VERSION)
PKG_HASH:=d41d8cd98f00b204e9800998ecf8427e
PKG_HASH:=2672ae7a79efbe08d5c5fbeeff920ac8

#PKG_HASH:=d41d8cd98f00b204e9800998ecf8427e
#PKG_HASH:=ebaf426a181119a0f1d5b5343b8f1a24

#PKG_HASH:=4dcfc81b1e1f907d7b1e4c5024278074

include $(INCLUDE_DIR)/package.mk

define Package/megatools
  SECTION:=net
  CATEGORY:=Network
  SUBMENU:=File Transfer
  TITLE:=lightweight download utility
  URL:=https://mega.nz
  DEPENDS:=+glib2 +libcurl +libopenssl
endef

define Package/megatools/description
  megatools is a lightweight command-line download for mega.nz
  utility
endef

CONFIGURE_ARGS += \
	--disable-docs

define Package/megatools/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_INSTALL_DIR)/usr/bin/megatools $(1)/usr/bin
endef

$(eval $(call BuildPackage,megatools))
