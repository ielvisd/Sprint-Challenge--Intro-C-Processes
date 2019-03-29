**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Process States: 
Created - Process is created but not yet ran. 
User running - Process is a user process and is running. 
Kernel Running - Process is a kernel process and is runnig. 
Zombie - Process has completed it's execution but is still in process table because the parent process has not read it's exit status. 
Preempted - A process switches from kernel to user mode. 
Ready to run in memory - It's ready to run in memory and ready to be scheduled by the kernel. 
Ready to run, swapped – Ready to run but no main memory available. 
Sleep, swapped- Process has been swapped to secondary storage and is currently blocked. 
Asleep in memory- In memory but currently blocked. 

**2. What is a zombie process?**
A process that has completed it's execution but is still in process table because the parent process has not read it's exit status. 

**3. How does a zombie process get created? How does one get destroyed?**
Parent process has not read a child's exit status making it (the child process which has finished executing) a zombie process. You destroy a child process by having it's exit status read by the parent with the `wait` system call which will reap the child from the process table. 


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

Some benefits of compiled languages vs. non-compiled languages are that the compiled languages have higher execution speed because they are converted directly into machine code vs the non-compiled languages which need to go through compiler first adding an extra step. 

Another benefit of compiled languages is that you as a developer get more control over that hardware that you are working with. You have more control over things such as memory management & CPU usage. I appreciate learning and using C because it has forced me to consider what was going on underneath the hood and understand what I was doing at a deeper level than before.