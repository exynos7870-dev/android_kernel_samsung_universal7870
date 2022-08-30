ccflags-y := -Idrivers/staging/android

CFLAGS_adf.o := -I$(src)

<<<<<<< HEAD
obj-$(CONFIG_ADF) += adf.o \
=======
obj-$(CONFIG_ADF) += adf_core.o

adf_core-y := adf.o \
>>>>>>> common/deprecated/android-3.18
	adf_client.o \
	adf_fops.o \
	adf_format.o \
	adf_sysfs.o

<<<<<<< HEAD
obj-$(CONFIG_COMPAT) += adf_fops32.o
=======
adf_core-$(CONFIG_COMPAT) += adf_fops32.o
>>>>>>> common/deprecated/android-3.18

obj-$(CONFIG_ADF_FBDEV) += adf_fbdev.o

obj-$(CONFIG_ADF_MEMBLOCK) += adf_memblock.o
