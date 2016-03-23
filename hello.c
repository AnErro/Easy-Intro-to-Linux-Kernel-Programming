#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

//this function runs on load of the module, treat this as you would main().
int init_module(void)
{
    /*printk prints to a kernel log, the KERN_INFO section
     can be replaced with diffrent logging levels. We use this
     since we are in kernel space not user space and unable to call printf
    */
    printk(KERN_INFO "HELLO:: This is our LKM speaking! \n");
    return 0;
}

//this function runs on close of module
void cleanup_module(void)
{
    printk(KERN_INFO "HELLO:: This is our LKM leaving :( \n");
}
