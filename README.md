# SENG1120-Assignment_2
**_Mark:_** 10.0 / 10.0 

## Comments by Marker
DEMO:

1. Program compiles and works correctly with the files provided (each line incorrectly printed should attract a 2mark penalty). 

2. Implementing a linked list of stacks. 
    - For SENG1120 students, add 2.0 bonus marks if implemented correctly. 
    - For SENG6120 students, remove 2.0 marks if not implemented correctly. 
 
A: Total ( 10.0 /10.0)         

B: Bonus for List<LStack> ( 0.0 / 2.0) 

 | REMOVE MARKS IF |  | 
 |--------------|------------|
 |Code leads to memory leaks during execution | ( 0.0 /-2.0) |
 |Lack of macroguards | ( 0.0 /-1.0) |
 |Lack of destructors | ( 0.0 /-1.0) |
 |Lack of const qualifiers | ( 0.0 /-1.0) |
 |Lack of documentation in the code | ( 0.0 /-2.0)  |
 |Lack of templates | ( 0.0 /-5.0) |
 |Declaration of temporary variables as member variables of the class | (0.0/-1.0) |
 |Lack of use of dynamic memory allocation in Node, LStack , LQueue or LinkedList | ( 0.0/-10.0) |
 |Violation of encapsulation / information hiding | ( 0.0 /-5.0) |
 |Implementation in header files | ( 0.0 /-2.0) |
 |Use of friend methods | ( 0.0 /-2.0) |

Late Deduction (  ) 
 
C: Total deductions ( 0.0 / 32.0) 

FINAL MARK [ MIN (10.0, A+B-C) ]: 10.0

Comments: Good Work :) 

# Assignment Specification

You will implement the following classes: LStack, LQueue, LinkedList and Node that support AlexSort. LinkedList and Node are the same as in Assignment 1 but converted to class templates. LStack and LQueue are completely new classes. You are not allowed to use the C++ Abstract Data Types available with the language. 

You will be provided with a file AlexSort.cpp, which demonstrates the use of your classes, and a Makefile. You are NOT ALLOWED to change those two files. We also have included AlexSortString.cpp, which demonstrates the use of the classes with string data, instead of int and makes sure they allow generic data types.
