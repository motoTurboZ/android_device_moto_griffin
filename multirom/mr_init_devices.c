#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",
    "/sys/class/graphics/fb1",
    "/sys/devices/virtual/graphics/fb0",
    "/sys/devices/virtual/graphics/fb1",

    "/sys/block/mmcblk0",
    "/sys/devices/soc/74a4900.sdhci",
    "/sys/devices/soc/74a4900.sdhci/mmc_host",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007/block/mmcblk0",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007/block/mmcblk0*",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007/block/mmcblk0/mmcblk0p1",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007/block/mmcblk0/mmcblk0p1*",

    "/sys/bus/mmc*",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers",
    "/sys/module/sdhci",
    "/sys/module/sdhci*",
    "/sys/module/sdhci_msm",
    "/sys/module/sdhci_msm*",
    "/sys/module/mmcblk",

    // input
    "/sys/devices/soc/soc:gpio_keys/input*",
    "/sys/devices/soc/soc:gpio_keys/input/input7*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc/75b6000.i2c/i2c-8/8-0020/input*",
    "/sys/devices/soc/75b6000.i2c/i2c-8/8-0020/input/input4*",

    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",

    NULL
};

