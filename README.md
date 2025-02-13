# Learning C Code: A College Exp

## Introduction
Today, my college class focused on the fundamentals of C programming. We dove into writing C code, with a specific emphasis on understanding and using format specifiers effectively.

## Objectives
- Learn the basics of writing C code
- Understand the importance and usage of format specifiers

## Topics Covered
- Execution Of A Program
- Prototype of printf
- Printing Diffrent Data Types
- Precision Control
- Length Control


### Basics of Writing C Code
- Introduction to C programming language
- Setting up the C environment
- Writing and executing a simple C program
- Understanding the structure of a C program

### Format Specifiers
Format specifiers are used in C programming to control the input and output format. They are essential for formatting data in printf and scanf functions. Today, we covered the following format specifiers:

- `%d` for integers(int)
- `%f` for floating-point numbers
- `%c` for characters
- `%s` for strings
- `%x` for hexadecimal representation
- `%o` for octal representation
- `%lf` for double
- `%%` for %
- `%u` for unsigned decimal integer(unsigned int)

## Example Code
Here’s an example of how to use format specifiers in a C program:

```c
#include<stdio.h>
int main()
{
    char c='a';
    int x=-1;
    float f=7.9;
    double d=777.898989;
    printf("formatted output %c %d %u %o %x %f %lf\n", c,x,x,x,x,f,d);
}
