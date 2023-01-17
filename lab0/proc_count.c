#include <linux/module.h>
#include <linux/printk.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/sched.h>

struct proc_dir_entry *proc_entry = NULL;

static int proc_count(struct seq_file *m, void *v)
{
	struct task_struct *t;
	int count = 0;
	for_each_process(t) {
		count++;
	}
	seq_printf(m, "%d\n", count);
}

static int __init proc_count_init(void)
{
	pr_info("proc_count: init\n");
	proc_entry = proc_create_single("count", 0, NULL, proc_count);
	return 0;
}

static void __exit proc_count_exit(void)
{
	proc_remove(proc_entry);
	pr_info("proc_count: exit\n");
}

module_init(proc_count_init);
module_exit(proc_count_exit);

MODULE_AUTHOR("Your name");
MODULE_DESCRIPTION("One sentence description");
MODULE_LICENSE("GPL");
