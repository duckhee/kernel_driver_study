#include <linux/init.h>
#include <linux/module.h>
#include <linux/errno.h>

MODULE_LICENSE("Dual BSD/GPL");

static void __exit cleanup_function(void)
{
	/* Clean up code here. */
	unregister_those(ptr3, "skull");
	unregister_that(ptr2, "skull");
	unregister_this(ptr1, "skull");
}

int __init my_init_function(void)
{
	int err;
	err= register_this(ptr1, "sknull");
	if(err) goto fail_this;
	err = register_that(ptr2, "skull");
	if(err) goto fail_that;
	err = register_those(ptr3, "skull");
	if(err) goto fail_those;

	return 0;

fail_those: unregister_that(ptr2, "skull");
fail_that: unregister_this(ptr1, "skull");
fail_this: return err;
}
