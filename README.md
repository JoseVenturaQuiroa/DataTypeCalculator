# DataTypeCalculator

This file was made as a personal introduction to memory management using C. The current supported data types are `char`, `int`, `short`, `long`, `float`, and `double`.

## Description

1. The program displays an input prompt to enter the total number of data types

2. The program reads an integer number to read the intended number of types and stores it as `noOfInputs`

3. For each successive iteration of `noOfInputs`  
&nbsp;&nbsp;&nbsp;a. The program displays an input prompt to enter the number of each data type, as well as the data type  
&nbsp;&nbsp;&nbsp;b. The program reads an integer value, `noOfTypes`, representing the amount of each data type, followed by a space, and then the name of the data type, `type`  
&nbsp;&nbsp;&nbsp;c. If the integer value is 0, the integer value whole, representing the total number of bytes used, does not change.  
&nbsp;&nbsp;&nbsp;d. If the integer value is not 0  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;i. The program determines which data type was entered by the user  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ii. If the program cannot determine the data type  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1. The program prints "Not a valid data type within C."  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2. The program exits  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;iii. If the program can determine the data type  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1. The program determines the amount of space used by multiplying the byte size of the data type by `noOfTypes`, and adding that value to `whole`

4. The program displays the total amount of space, represented in bytes, used by all the entered data types
