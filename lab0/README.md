# A Kernel Seedling

This is a kernel module that counts and shows the number of running processes.

## Building

Run the command "make" in the directory lab0.

## Running

Inside the lab0 directory, run the following commands:
> sudo insmod proc_count.ko
> cat /proc/count

"sudo insmod" initializes the module and the last command should report a single integer representing the number of processes running on the machine.

## Cleaning Up

To remove the kernel and clean up the code run the following command:
> sudo rmmod proc_count
> make clean

"sudo rmmod" will print nothing if it succeeds.

## Testing

Report which kernel release version you tested your module on
(hint: use `uname`, check for options with `man uname`).
It should match release numbers as seen on https://www.kernel.org/.

