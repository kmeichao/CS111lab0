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
If you run with python testing, run the command "rm -r __pycache__" to remove what was added by the test suite.

## Testing

To run the provided python test cases run the command:
> python -m unittest

A '.' will appear for each passed test case. A 'F' will appear for each failed test case. "OK" will show at the bottom if all test cases succeeded.

To find the kernel release version run the command:
> uname -a

kernel release version: Linux 5.14.8-arch1-1


