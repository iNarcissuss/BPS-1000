# Packages installed to the root file system

IMAGE_INSTALL += "acdbloader"
IMAGE_INSTALL += "acdbmapper"
IMAGE_INSTALL += "acdbrtac"
IMAGE_INSTALL += "adiertac"
IMAGE_INSTALL += "atfwd-daemon"
#IMAGE_INSTALL += "ath6kl-proprietary"
IMAGE_INSTALL += "audcal"
IMAGE_INSTALL += "audcaltests"
IMAGE_INSTALL += "audioalsa"
IMAGE_INSTALL += "audio-ftm"
#IMAGE_INSTALL += "bt-services"
#IMAGE_INSTALL += "btrs-daemon"
#IMAGE_INSTALL += "cne"
#IMAGE_INSTALL += "common"
IMAGE_INSTALL += "csd-server"
#IMAGE_INSTALL += "cxm-apps"
IMAGE_INSTALL += "data"
IMAGE_INSTALL += "diag"
IMAGE_INSTALL += "diag-reboot-app"
IMAGE_INSTALL += "embms-kernel"
IMAGE_INSTALL += "fs-scrub-daemon"
IMAGE_INSTALL += "ftm"
IMAGE_INSTALL += "garden-app"
#IMAGE_INSTALL += "gps"
#IMAGE_INSTALL += "ipthdme"
IMAGE_INSTALL += "loc-vzw"
IMAGE_INSTALL += "data-items"
IMAGE_INSTALL += "lbs-core"
IMAGE_INSTALL += "location-service"
IMAGE_INSTALL += "loc-mcm-test-shim"
IMAGE_INSTALL += "loc-mcm-qmi-test-shim"
IMAGE_INSTALL += "loc-mcm-type-conv"
IMAGE_INSTALL += "loc-hal-test-shim"
IMAGE_INSTALL += "location-hal-tests"
IMAGE_INSTALL += "location-geofence"
IMAGE_INSTALL += "location-flp"
IMAGE_INSTALL += "loc-launcher"
IMAGE_INSTALL += "izat-core"
IMAGE_INSTALL += "izat-client-api"
IMAGE_INSTALL += "lowi-server"
IMAGE_INSTALL += "lowi-test"
IMAGE_INSTALL += "xtwifi-client"
IMAGE_INSTALL += "xtwifi-inet-agent"
IMAGE_INSTALL += "gtp-ap-le-os-agent"
IMAGE_INSTALL += "xt-adapter"
IMAGE_INSTALL += "hlos-wrapper-api"
IMAGE_INSTALL += "soundtrigger"
IMAGE_INSTALL += "mbim"
IMAGE_INSTALL += "psm"
IMAGE_INSTALL += "mcm-core"
IMAGE_INSTALL += "mcmlocserver"
IMAGE_INSTALL += "modem-shutdown"
#IMAGE_INSTALL += "pdc-daemon"
IMAGE_INSTALL += "qmi"
IMAGE_INSTALL += "qmuxd"
IMAGE_INSTALL += "qmi-framework"
IMAGE_INSTALL += "qmi-client-helper"
IMAGE_INSTALL += "qmi-shutdown-modem"
IMAGE_INSTALL += "qmi-simple-ril"
#IMAGE_INSTALL += "rmtstorage"
IMAGE_INSTALL += "subsystem-ramdump"
IMAGE_INSTALL += "start-scripts-misc-daemon"
IMAGE_INSTALL += "start-scripts-mssboot"
IMAGE_INSTALL += "tftp-server"
IMAGE_INSTALL += "start-scripts-qseecomd-daemon"
IMAGE_INSTALL += "start-scripts-sfs-config"
IMAGE_INSTALL += "thermal-engine"
IMAGE_INSTALL += "time-services"
#IMAGE_INSTALL += "wap-fota-daemon"
IMAGE_INSTALL += "wlan-services"
IMAGE_INSTALL += "qcacld-utils"
IMAGE_INSTALL += "hci-qcomm-init"
IMAGE_INSTALL += "qc-bt-daemon"
IMAGE_INSTALL += "nmea-test-app"
IMAGE_INSTALL += "securemsm-noship"
IMAGE_INSTALL += "securemsm"

include ${BASEMACHINE}-${VARIANT}-only-packages.inc