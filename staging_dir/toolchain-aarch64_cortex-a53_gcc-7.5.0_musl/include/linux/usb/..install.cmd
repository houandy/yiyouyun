cmd_/home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/usb/.install := bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/usb ./include/uapi/linux/usb audio.h cdc-wdm.h cdc.h ch11.h ch9.h functionfs.h g_printer.h gadgetfs.h midi.h tmc.h video.h; bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/usb ./include/linux/usb ; bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/usb ./include/generated/uapi/linux/usb ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/usb/$$F; done; touch /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/usb/.install
