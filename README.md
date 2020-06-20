
# khadas openwrt sdk [![Build Status](https://travis-ci.com/hyphop/khadas-openwrt-sdk.svg?branch=master)](https://travis-ci.com/hyphop/khadas-openwrt-sdk)

## OpenWrt extra packages for khadas Krescue and openwrt 

+ dialog
+ exfat-utils
+ i2c
+ libarchive
+ pigz
+ pixz
+ squashfs-tools
+ triggerhappy
+ uboot-mkimage
+ uinput
+ xxhash
+ zstd
+ vitetris
+ megatools
+ ...

## USAGE

```
echo "
src-git base https://git.openwrt.org/openwrt/openwrt.git
src-git packages https://git.openwrt.org/feed/packages.git
src-git extra https://github.com/hyphop/khadas-openwrt-feed-extra
" > feeds.conf
```

## CLONE

```
git clone https://github.com/hyphop/khadas-openwrt-feed-extra.git
```

## related projects

+ https://github.com/hyphop/khadas-openwrt-feed-extra
+ https://github.com/hyphop/khadas-rescue-rootfs
+ https://github.com/hyphop/khadas-rescue
+ https://github.com/hyphop/khadas-openwrt
+ https://github.com/hyphop/khadas-linux-kernel
+ https://github.com/hyphop/khadas-uboot
