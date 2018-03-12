## Homework 6

### C Exercises

Modify the link below so it points to the `ex06` directory in your
student repository.

[Here is a link to the ex06 directory in my repository](https://github.com/willythor/ExercisesInC/tree/master/exercises/ex06)

### Think OS Chapter 6 reading questions

**Memory management**

1) Which memory management functions would you expect to take constant time?
Which ones take time proportional to the size of the allocated chunk?

constant time:
- realloc (if the new size is smaller)
- free
- malloc (provided sbrk doesn't have to be called)
 
time proportional to size of allocated chunk:
- calloc


2) For each of the following memory errors, give an example of something that might go wrong:

a) Reading from unallocated memory.

A segmentation fault might occur, or it'll read from memory and recieve what ever happened to be stored at the given locations.

b) Writing to unallocated memory.

A long time might pass until that portion of memory is read from and then the possible error will be very hard to diagnose.

c) Reading from a freed chunk.

The same as reading from an unallocated portion of memory.

d) Writing to a freed chunk.

The same as writing to an unallocated portion of memory.

e) Failing to free a chunk that is no longer needed.

You could run out of memory if you computer is not using a virtual memory address.


3) Run

```
    ps aux --sort rss
```

to see a list of processes sorted by RSS, which is "resident set size", the amount of physical 
memory a process has.  Which processes are using the most memory?

Chrome, Visual Studio Code

4) What's wrong with allocating a large number of small chunks?  What can you do to mitigate the problem?

It'll cause fragmentation and make it very slow to allocate memory in the future. According to something I read on stackoverflow, a possible solution is writing your a custom memory allocator.

If you want to know more about how malloc works, read 
[Doug Lea's paper about dlmalloc](http://gee.cs.oswego.edu/dl/html/malloc.html)
