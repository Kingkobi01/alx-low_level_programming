# 0x00-hello_world
i

1. [Preprocessor](./0-preprocessor)   
	`gcc -E filename` - Removes all Comments from the source code, adds all the header files and replace all macro names with macro definitions.



2. [Assembler](./2-assembler)   
	`gcc -S filename` - Converts the preprocessed source code into assembly language.

3. [Compilier](./1-compiler)
	`gcc filename -o ` - Converts the assembly code into object code (0-s and 1's) which the computer can understand.

4. > By the way	 
`gcc filename`  Does the Preprocessing, Compiling, Assembly and Linking together and creates an executable file called `a.out`

5. [Hello, puts](./4-puts.c)   
	This program prints a sentence followed by a newline using the puts() function.

6. [Hello, printf](./5-printf.c)
	This program prints a sentence followed by a newline using the printf() function.

7. [Size is not grandeur, and territory does not make a nation](./6-size.c)   
	This program prints the size of various types on the computer it is compiled and run on.

8. [Intel](./100-intel)
	This script generates the assembly code in the intel syntax of a C code and save it in an output file.

9. [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](./101-quote.c)
	This program prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19` followed by a new line to the standard error.
