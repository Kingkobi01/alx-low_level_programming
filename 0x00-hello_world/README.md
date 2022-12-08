# 0x00-hello_world

1. [Preprocessor](./0-preprocessor)   
	`gcc -E filename` - Removes all Comments from the source code, adds all the header files and replace all macro names with macro definitions.

	`gcc filename` - Does the Preprocessing, Compiling, Assembly and Linking together and creates an executable file called `a.out`

2. [Assembler](./2-assembler)   
	`gcc -S filename` - Converts the preprocessed source code into assembly language.

3. [Compilier](./1-compiler)
	`gcc filename -o ` - Converts the assembly code into object code (0-s and 1's) which the computer can understand.
