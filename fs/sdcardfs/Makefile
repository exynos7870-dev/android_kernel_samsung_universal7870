<<<<<<< HEAD
#
# Makefile for S.LSI Kernel Android Sdcardfs
#

subdir-ccflags-y += -Ifs
obj-y += $(ANDROID_MAJOR_VERSION)/
=======
SDCARDFS_VERSION="0.1"

EXTRA_CFLAGS += -DSDCARDFS_VERSION=\"$(SDCARDFS_VERSION)\"

obj-$(CONFIG_SDCARD_FS) += sdcardfs.o

sdcardfs-y := dentry.o file.o inode.o main.o super.o lookup.o mmap.o packagelist.o derived_perm.o
>>>>>>> common/deprecated/android-3.18
