### Automatic Makefile generation by 'genmake' script        ####
### Copyright, Jerry Cooperstein, coop@linuxfoundation.org 2/2003 - 1/2012 ####
### License: GPLv2 ###

obj-m +=  lab1.o

export KROOT=/lib/modules/3.2.0-32-generic/build

allofit:  modules
modules:
	@$(MAKE) -C $(KROOT) M=$(PWD) modules
modules_install:
	@$(MAKE) -C $(KROOT) M=$(PWD) modules_install
kernel_clean:
	@$(MAKE) -C $(KROOT) M=$(PWD) clean

clean: kernel_clean
	rm -rf   Module.symvers modules.order
