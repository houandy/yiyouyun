cmd_/home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/caif/.install := bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/caif ./include/uapi/linux/caif caif_socket.h if_caif.h; bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/caif ./include/linux/caif ; bash scripts/headers_install.sh /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/caif ./include/generated/uapi/linux/caif ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/caif/$$F; done; touch /home/build/1296/rtd1296-openwrt-19.07.8/build_dir/toolchain-aarch64_cortex-a53_gcc-7.5.0_musl/linux-dev//include/linux/caif/.install
