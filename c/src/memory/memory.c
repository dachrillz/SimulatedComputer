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

#include "../headers/memory.h"

static void load_initial_screen();

static void load_keyboard();

static short memory[24576];

static int current_address = 0;
static int loaded_value = 0;

int i; //for the for loops.


void reset_Memory(){
	/*
	Wipe the memory.
	*/
	current_address = 0;
	loaded_value = 0;
	

	for(i = 0; i < 24576; i++){
		memory[i] = 0;
	}

	load_initial_screen();
	load_keyboard();
}


short out(short i){
	return memory[i];
}

void in(short input){
	loaded_value = input;
}

void load(){
	memory[current_address] = loaded_value;
}

void address(short adr){
	current_address = adr;
}

static void load_initial_screen(){
	for(i = 16384; i < 24576; i++){ // The range of i is the range of the memory mapped screen
		memory[i] = 0; //@TODO: This should be some standard nice screen.
	} 
}

static void load_keyboard(){
	memory[24576] = 0; //@TODO: map this to the keyboard later.
}
