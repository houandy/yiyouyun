cmd_/home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/scsi/.install := bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/scsi ./include/uapi/scsi cxlflash_ioctl.h scsi_bsg_fc.h scsi_netlink.h scsi_netlink_fc.h; bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/scsi ./include/scsi ; bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/scsi ./include/generated/uapi/scsi ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/scsi/$$F; done; touch /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/scsi/.install
