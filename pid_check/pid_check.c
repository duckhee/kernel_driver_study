#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>
MODULE_LICENSE("Dual BSD/GPL");

static int pid_check_init(void)
{
	printk(KERN_INFO "The process is \" %s \" , (pid %i)\n", current->comm, current->pid);
	return 0;
}

static void pid_check_exit(void)
{
	printk(KERN_INFO "bye check pid\n");
}

module_init(pid_check_init);
module_exit(pid_check_exit);


