# CPP-Module-00

## Overview

This project leverages imperative programming and object-oriented programming (OOP) principles to accomplish [briefly describe the project's purpose]. It places a strong emphasis on rigor, ensuring that the codebase is of high quality, maintainable, and follows best practices.

## Key Concepts

### Imperative Programming
Imperative programming is a paradigm that focuses on explicitly defining step-by-step instructions for a computer to follow. It outlines how a program operates by specifying a sequence of statements that change the program's state.

### Object-Oriented Programming (OOP)
Object-Oriented Programming is based on the concept of "objects," which are self-contained units containing both data (attributes) and methods (functions). OOP promotes the use of classes to create objects and emphasizes concepts like encapsulation, inheritance, and polymorphism.

### Rigor
Rigor in programming refers to the quality and thoroughness of the code. It involves adhering to best practices, maintaining clean code, thorough documentation, and extensive testing to ensure reliability and maintainability.

## In general

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes" (source: [Wikipedia](https://en.wikipedia.org/wiki/C++)).<br><br>
This project was my first contact to write programms in C++.<br>
All of those exercises are compilable with the `-std=c++98`-flag, since this was a requirement for this project.<br>
All exercises where compiled and tested on `macOS Catalina 10.15.7` and `Ubuntu 20.04.4 LTS`.<br>

## Exercise 00

The Goal of this exercise was to write a really simple c++ style programm, but without any classes yet, just to get familiar with the use of i.e. `std::cout`.


You can compile this project with `make`, `make all` or `make re`.<br>
Then use it with `./megaphone "Argument_you_want_to_change_to_all_CAPS"`


## Exercise 01

This subject was a little more sophisticated than the one before.<br>
First time using classes.<br>


This programm resembles a phonebook, where you can store up to 8 contacts, and display the stored information during runtime.<br>
When the programm is terminated in any way, all contacts are lost.<br>
The phonebook also has instructions and descriptive error messages that tell you what to do and how to use it correctly.


Usage:

You can compile this project with `make`, `make all` or `make re`.<br>
Then you can run it with `./phonebook`.<br>
After that, just follow the instructions of the phonebook.<br>


## Exercise 02

The scope of this exercise was to re-engineer the [Account.cpp](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/src/Account.cpp) file from the given [tests.cpp](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/src/tests.cpp), [Account.hpp](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/include/Account.hpp) and [19920104_091532.log](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/19920104_091532.log) files.


If you compare my output ([my.log](https://github.com/tblaase/CPP-Module-00/blob/main/ex02/my.log)) with the original .log file, the only difference is the timestamp, which is expected.<br>
Another difference will occure only when running it on macOS, where the order of the decronstruction is reversed.<br>

You can compile this project with `make`, `make all` or `make re`.<br>
Then you can run it with `./leak_information`.<be>
<br>

