ifeq ($(KERNELRELEASE),)
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

moduels_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) moduels_install

clean:
	rm -rf *.o i*~ core .depend .*.cmd *.ko *.mod.c .tmp_versions

.PHONY: modules modules_install clean

else
	obj-m := pid_check.o

endif
