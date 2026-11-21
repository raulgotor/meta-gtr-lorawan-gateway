DESCRIPTION = "An ncurses version of Space Invaders"
HOMEPAGE = "http://ninvaders.sourceforge.net"
LICENSE = "GPL-3.0-only"
SUMMARY = "A cool game"

SRC_URI = "${SOURCEFORGE_MIRROR}/project/${BPN}/${BPN}/${PV}/${BP}.tar.gz"
SRC_URI += "\
    file://joystick-support.patch \
"
EXTRA_OEMAKE = "-e"
CFLAGS += "-fcommon"
DEPENDS += "ncurses"

do_install() {

    install -d ${D}/${bindir}
    install -m 755 nInvaders ${D}/${bindir}/ninvaders

}
