#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int init_module(void)
{
    printk(KERNEL_INFO "HELLO:: This is our LKM speaking! \n")
    return 0;
}
void cleanup_module(void)
{
    printk(KERNEL_INFO "HELLO:: This is our LKM leaving :( \n")
}
