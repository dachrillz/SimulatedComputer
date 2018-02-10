/*

This is the instruction memory for the simulated computer.

Normally the machine instructions are stored in the normal memory along with data and programs. However for simplicity the programs will be stored in a separate memory in order to
make the code for the simulated computer easier to debug.

More formally the instruction memory is described by:

Chip Name: 	ROM32K
		    address[15  //Address of the instruction that is requested.
Output:		out[16] 	//The request instruction consisting of 16 bits.

Comment: This memory is preloaded with the instruction set for the simulated computer. Should one which to extend or change the instructions for the computer, a proper instruction needs to be added to this file.

Instruction Table: 
Legend: d stands for destination (address), j stands for jump (PC) They can be zero in the language. A is the A-registry, D is the D-registry. M is the main memory.

mnemonic |      xxxx xxxx xxxx xxxx     |
---------|------------------------------|
A-instr  |      011x xxxx xxxx xxxx     |
---------|------------------------------|
C-instrs |                              |
---------|------------------------------|
a = 0    |                              |         
---------|------------------------------|
0        |      1110 1010 10dd djjj     |
1        |      1110 1111 11dd djjj     |
-1       |      1110 1110 10dd djjj     |
D        |      1110 0011 00dd djjj     |
A        |      1110 1100 00dd djjj     |
!D       |      1110 0011 01dd djjj     |
!A       |      1110 1100 01dd djjj     |
-D       |      1110 0011 11dd djjj     |
-A       |      1110 1100 11dd djjj     |
D+1      |      1110 0111 11dd djjj     |
A+1      |      1110 1101 11dd djjj     |
D-1      |      1110 0011 10dd djjj     |
A-1      |      1110 1100 10dd djjj     |
D+A      |      1110 0000 10dd djjj     |
D-A      |      1110 0100 11dd djjj     |
A-D      |      1110 0001 11dd djjj     |
D&A      |      1110 0000 00dd djjj     |
D|A      |      1110 0101 01dd djjj     |
---------|------------------------------|
a = 1    |                              |         
---------|------------------------------|
M        |      1111 1100 00dd djjj     |
!M       |      1111 1100 01dd djjj     |
-M       |      1111 1100 11dd djjj     |
M+1      |      1111 1101 11dd djjj     |
M-1      |      1111 1100 10dd djjj     |
D+M      |      1111 0000 10dd djjj     |
D-M      |      1111 0100 11dd djjj     |
M-D      |      1111 0001 11dd djjj     |
D&M      |      1111 0000 00dd djjj     |
D|M      |      1111 0101 01dd djjj     |
-----------------------------------------
*/


#include "../headers/memory.h"

static unsigned short instruction_PC;

static unsigned short instruction_memory[29] = {
                                                0b0110000000000000, //@A
                                                0b1110101010000000  //0
                                                

};

void set_instruction_pc(unsigned short i){
    instruction_PC = i;
}

unsigned short get_instruction(){
    return instruction_memory[instruction_PC];
    }
    
    
    
    



