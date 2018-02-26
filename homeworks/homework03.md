## Homework 3

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

[Here is a link to the ex03 directory in my repository]
(https://github.com/willythor/ExercisesInC/tree/master/exercises/ex03)

### Think OS Chapter 4 reading questions

**Files and file systems**

1) What abstractions do file systems provide?  Give an example of something that is logically 
true about files systems but not true of their implementations.

A file system consists of files made up of a certain number of bytes, whoever when these files are actually stored they're stored in contiguous or non-contiguous blocks of space. Additionally, each block of space doesn't always contain a single file, sometimes it contains parts of a file or contains the entire file with room to spare.

2) What information do you imagine is stored in an `OpenFileTableEntry`?

The location within a file that a system is at while reading a given file.

3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage?

Block transfers, Prefetching, Buffering, and Caching.

4) Suppose your program writes a file and prints a message indicating that it is done writing.  
Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the 
file you wrote is not there.  What happened?

A program might cache some data before writing it to disk in order to avoid writing to the disk too often. It's very possible that when the power was cut, the message was still cached and hadn't yet been written to the disk.

5) Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT?

It might be faster to read a large file in order using FAT over an inode. However, searching a file should be faster using the inode structure.

6) What is overhead?  What is fragmentation?

Overhead is the amount of necessary extra space allocated to what is not actually files, such as the data structures used by the allocators. Fragmentaion is when some bloacks are left unused or some are left partially used.

7) Why is the "everything is a file" principle a good idea?  Why might it be a bad idea?

This principle is a good idea because it makes life easier for programmers since they only have to learn one API. However, it might be a bad idea if it acts exclusively like a stream and doesn't allow a user to access the end of a sorted list for example, without going throught the entire list.

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.  
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then 
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).  
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).



