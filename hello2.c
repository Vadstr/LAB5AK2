// SPDX-License-Identifier: GPL-2-Clause
#include <linux/init.h>
#include <linux/module.h>
#include <linux/types.h>

#include <hello1.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("LAB5AK2 advanced task: hello1\n");
MODULE_AUTHOR("Striletskiy Vadim IV-82\n");

static uint n = 1;
module_param(n, uint, 0);
MODULE_PARM_DESC(n, "Hello to print\n");

static int hello_init(void)
{
        return helloFunction(n);
}

static void hello_exit(void)
{
        printk(KERN_ALERT "hello2 exit\n");
}

module_init(hello_init);
module_exit(hello_exit);
