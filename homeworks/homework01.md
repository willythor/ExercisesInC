## Homework 1

### C Exercises

Modify the link below so it points to the `ex01` directory in your
student repository.

[Here is a link to the ex01 directory in my repository](https://github.com/willythor/ExercisesInC/tree/master/exercises/ex01)

### Think OS Chapter 1 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1) Give an example of a feature common in interpreted languages that is rare in compiled languages.

Often in interpreted languages you don't know what the types of the paramaters are before/while the program is running.

2) Name two advantages of static typing over dynamic typing.

Static typing catches more errors during compile time and variable names don't need to be stored in memory, just the pointes and values.

3) Give an example of a static semantic error.

If a function requires an int and it is given a char, this is an example of a static semantic error

4) What are two reasons you might want to turn off code optimization?

Code optimizations can somtimes hide bugs that would otherwise be present in normal compilation.

5) When you run `gcc` with `-S`, why might the results look different on different computers?

Different architectures will result in different compilations of assembly code. 

6) If you spell a variable name wrong, or if you spell a function name wrong, the error messages you get might look very different.  Why?

This is because spelling a function name wrong will be caught by the linker, whereas spelling a variable name wrong will be caught by the compiler. They are seperate components and will have seperate error messages.

7) What is a segmentation fault?

This is whenever you try to access a portion of memory that you're not allowed to read or write to. 
