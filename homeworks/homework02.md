## Homework 2

### C Exercises

Modify the link below so it points to the `ex02` directory in your
student repository.

[Here is a link to the ex02 directory in my repository](https://github.com/willythor/ExercisesInC/tree/master/exercises/ex02)

### Think OS Chapter 2 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1. Give a real-world example of virtualization (ideally not one of 
the ones in the book).  What is abstractly true about the system that
is not literally true about the implementation?

A trackpad is an example of virtualization. A finger moving around a trackpad results in the cursor on screen to move with the same movements. What is not usually thought about are the capacitive sensors sending information to a processor that nows the location of your finger touches and displays this information on screen.

2. What is the difference between a program and a process?

A program is a portion of code written to interact with the operating system. A process is an instance of one of these programs that runs in an isolated manner such that it doesn't interfere with other programs.

3. What is the primary purpose of the process abstraction? 

By isolating each running program, a programmer doesn't have to worry about every possible interaction between programs and the operating system.

4. What illusion does the process abstraction create?

A proccess creates the illusion that each process has its own chunk of memory. Additionally, multitasking among processes lends users to believe that two programs are running at the same time when often an operating system will pause the state of one program and move on to another program when necessary, and only move back to the first program when the user desires to do so. This is done seamlessley to make the user think both processes were run without interuption. 

5. What is the kernel?

The part of the operating system responsible for core capabilities like creating threads.

6. What is a daemon?

Processes that run in the background and provide operating system services.
