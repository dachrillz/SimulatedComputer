/*
This is the hard drive of the computer. It stores programs (lists of instructions to be executed
by the processor.) 

The consists of 16 bit words, and the length of the memory is 16K + 8K + 1 These three parts
constructs, the general memory, memory for a screen and memory for a keyboard. The keyboard and 
screen are memory mapped.

More formally the memory is described by:

Chip Name: 	Memory
Inputs:		in[16],		//What to write
		load, 		//Write enable bit
		address[15] 	//Where to write
Output:		out[16] 	//Retrieve 16 bits

Comment:	The behaviour of the Screen and the Keyboard is described in their respective
		files.


*/

#include "memory.h"


void reset_Memory(){
	1+1;

}


short out(){
	return (short) 0;
}

void in(short input){
	1+1;
}

void load(){
	1+1;
}

void address(short adr){
	1+1;
}
