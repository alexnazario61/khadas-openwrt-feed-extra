#
# Copyright (C) 2014 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=libarchive
PKG_VERSION:=3.3.3
PKG_RELEASE:=3

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=https://www.libarchive.org/downloads
PKG_HASH:=ba7eb1781c9fbbae178c4c6bad1c6eb08edab9a1496c64833d1715d022b30e2e

PKG_MAINTAINER:=Johannes Morgenroth <morgenroth@ibr.cs.tu-bs.de>

PKG_MAINTAINER:=hyphop <art@khadas.com>

PKG_LICENSE:=BSD-2-Clause
PKG_LICENSE_FILES:=COPYING
PKG_CPE_ID:=cpe:/a:libarchive:libarchive

PKG_BUILD_PARALLEL:=1
PKG_INSTALL:=1
PKG_FIXUP:=autoreconf

include $(INCLUDE_DIR)/package.mk

define Package/libarchive/Default
	SECTION:=libs
	CATEGORY:=Libraries
	DEPENDS:=+liblzma +libzstd +zlib
	TITLE:=Multi-format archive and compression library
	URL:=https://www.libarchive.org/
endef

define Package/libarchive
	$(call Package/libarchive/Default)
endef

define Package/bsdtar/description
	Reads a variety of formats including tar, pax, zip, xar, lha, ar,
	cab, mtree, rar, warc, 7z and ISO images. Writes tar, pax, zip,
	xar, ar, ISO, mtree and shar archives. Automatically handles
	archives compressed with gzip, bzip2, lzip, xz, lzma or compress.
endef

define Package/bsdtar
    SECTION:=utils
    CATEGORY:=Utilities
    SUBMENU:=Compression
    DEPENDS:=+libarchive
    TITLE:=BSD variant that supports various file compression formats
    URL:=http://www.libarchive.org/
endef

CONFIGURE_ARGS += \
	--disable-bsdcat \
	--disable-rpath \
	--disable-acl \
	--disable-xattr \
	--without-cng \
	--without-iconv \
	--without-lz4 \
	--without-lzo2 \
	--without-nettle \
	--without-xml2 \
	--without-bz2lib \
	--without-expat \
	--without-openssl

define Build/InstallDev
	$(INSTALL_DIR) $(1)/usr/include
	$(CP) $(PKG_INSTALL_DIR)/usr/include/* $(1)/usr/include/
	$(INSTALL_DIR) $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/* $(1)/usr/lib/
endef

define Package/libarchive/install
	$(INSTALL_DIR) $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/*.so.* $(1)/usr/lib/
endef

define Package/bsdtar/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(CP) $(PKG_INSTALL_DIR)/usr/bin/bsdtar $(1)/usr/bin
endef

$(eval $(call BuildPackage,libarchive))
$(eval $(call BuildPackage,bsdtar))
