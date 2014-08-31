/*
 * lab1.c
 *
 *  Created on: 31.08.2014
 *      Author: z3r0byt3
 */

#include <linux/module.h>
#include <linux/init.h>

static int mod_param = 7;
module_param(mod_param, int, S_IRUGO | S_IWUSR);

static int __init my_init(void)
{
	printk("Modul wird geladen \n");
	printk(" mod_param = %d\n", mod_param);
	return 0;
}

static void __exit my_exit(void)
{
	printk("Modul wird entladen \n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_AUTHOR("Dimitrij Klesev");
MODULE_DESCRIPTION("3_chapter/lab1.c");
MODULE_LICENSE("GPL v2");
