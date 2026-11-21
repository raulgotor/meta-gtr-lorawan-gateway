inherit core-image

DESCRIPTION = "A small image"
LICENSE = "MIT"
IMAGE_INSTALL = " \
    packagegroup-core-boot \
    ${CORE_IMAGE_EXTRA_INSTALL}"
