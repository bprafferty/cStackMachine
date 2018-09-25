Brian Rafferty
bprafferty03@gmail.com

prog1_1.c 
Prints a header with my name and class info.
Then the program asks the user to type in 
their full name. Lastly, the program outputs 
a greeting to the user.

prog1_2.h
Header file that contains function prototypes
for building a stack. 

prog1_2.c
Source file that implements the header file. 
Contains methods necessary to build a stack
including: MakeStack, Push, Pop, and Grow. If 
Pop is called with nothing inside the stack, 
then the program will output -1.

prog1_3.c
Driver program that takes one integer input 
that will dictate how many lines the user will 
be allowed to type on. Any deviation from the 
required input will result in an error message. 
Next, the program prints a header with my name 
and class info. If the user types "push" and it 
is followed by a single word or number, then that 
value will be added to the stack. If the user 
types "pop", then the top value on the stack will
be printed to the terminal.