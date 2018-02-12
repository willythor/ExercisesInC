## Homework 3

### C Exercises

Modify the link below so it points to the `ex02.5` directory in your
student repository.

[Here is a link to the ex02.5 directory in my repository](https://github.com/YOUR_GITHUB_USERNAME_HERE/ExercisesInC/tree/master/exercises/ex02.5)

### Think OS Chapter 3 reading questions

### Virtual memory

1) The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?

2^6

2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.  

Ignoring the details of the encoding scheme, how many different characters can be represented?

2^32

3) What is the difference between "memory" and "storage" as defined in *Think OS*?

Memory is where data is usually held when a process is running. This is known as random access memory (RAM). This memory is gnerally volatile.

Storage is non-volatile an is usually stored on a HDD or SSD. This is what a process reads and writes files to if neccessary. 

4) What is the difference between a GiB and a GB?  What is the percentage difference in their sizes?

A GiB is 2^30 bytes and a GB is 10^9 bytes. There is roughly a 7 percent differenct in their states.

5) How does the virtual memory system help isolate processes from each other?

Virtual memory generates a list of valid physical address spaces and encapsulates them in a numbered list of virtual address spaces. This way a program never deals with physical address spaces and only the virtual ones. Each time a program needs to read or write values in memory, the hardware, with help from the operating system, translates the virtual address the program has access to to a physical address, before accessing main memory.

6) Why do you think the stack and the heap are usually located at opposite ends of the address space?

That way as the heap and stack expand, they expand towards each other and minimize the chance of running out of virtual memory (which seems unlikely in a 64-bit system).

7) What Python data structure would you use to represent a sparse array?

A dictionary or import scipy and use `scipy.sparse`.

8) What is a context switch?

The act of interrupting a process, saving its state, and then running another process.


