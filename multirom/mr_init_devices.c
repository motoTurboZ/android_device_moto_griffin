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
    "/sys/block/mmcblk0/mmcblk0p1",
    "/sys/devices/soc/74a4900.sdhci",
    "/sys/devices/soc/74a4900.sdhci/mmc_host",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007/block/mmcblk0",
    "/sys/devices/soc/74a4900.sdhci/mmc_host/mmc0/mmc0:0007/block/mmcblk0/mmcblk0p1",

    // Partitions
    "/sys/block/sda/*",
    "/sys/block/sdb/*",
    "/sys/block/sdc/*",
    "/sys/block/sde/*",
    "/sys/block/mmcblk0/*",

    "/sys/block/sda/sda15",  //system
    "/sys/block/sda/sda20",  //data
    "/sys/block/sdb/sdb14",  //keymaster
    "/sys/block/sda/sda19",  //cache
    "/sys/block/sda/sda17",  //boot
    "/sys/block/sda/sda14",  //recovery
    "/sys/block/sdc/sdc9",   //oem
    "/sys/block/sda/sda3",   //persist
    "/sys/block/sda/sda16",  //firmware
    "/sys/block/sda/sda5",   //misc
    "/sys/block/sde/sde1",   //usb_otg

    "/sys/block/mmcblk0/mmcblk0p1",
    "/sys/block/mmcblk0",

    "/sys/bus/mmc*",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/platform/drivers/sdhci_msm",
    "/sys/bus/sdio/drivers",
    "/sys/module/sdhci",
    "/sys/module/sdhci*",
    "/sys/module/sdhci_msm",
    "/sys/module/sdhci_msm*",
    "/sys/module/mmcblk",

    // input
    "/sys/devices/virtual/input",
    "/sys/devices/virtual/input/input0",
    "/sys/devices/virtual/input/input0/event0",
    "/sys/devices/virtual/input/input5",
    "/sys/devices/virtual/input/input5/event5",
    "/sys/devices/virtual/input/input5/mouse1",
    "/sys/devices/virtual/input/input6",
    "/sys/devices/virtual/input/input6/event6",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/virtual/input/mice",
    "/sys/devices/soc/soc:gpio_keys/input",
    "/sys/devices/soc/soc:gpio_keys/input/input7",
    "/sys/devices/soc/soc:gpio_keys/input/input7/event7",
    "/sys/devices/soc/75b6000.i2c/i2c-8/8-0020/input",
    "/sys/devices/soc/75b6000.i2c/i2c-8/8-0020/input/input4",
    "/sys/devices/soc/75b6000.i2c/i2c-8/8-0020/input/input4/event4",
    "/sys/bus/hid/drivers/hid-multitouch",
    "/sys/devices/virtual/touchscreen/s3508sga",

    // for adb
    "/sys/class/tty/ptmx",
    "/sys/devices/soc/66bf0c8.android_usb",
    "/sys/class/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/platform/drivers/android_usb",
    "/sys/bus/usb",

    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",

    NULL
};
