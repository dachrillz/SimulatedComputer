#ifndef CONSTANTS_H_
#define CONSTANTS_H_
/#A-instruction
define A_INSTRUCTION       	 0x0110000000000000 
//a = 0                                           
define   0_INSTRUCTION           0x1110101010000000 
define   1_INSTRUCTION           0x1110111111000000     
define  -1_INSTRUCTION           0x1110111010000000    
define   D_INSTRUCTION           0x1110001100000000   
define 	 A_INSTRUCTION           0x1110110000000000  
define 	!D_INSTRUCTION           0x1110001101000000     
define 	!A_INSTRUCTION           0x1110110001000000     
define 	-D_INSTRUCTION           0x1110001111000000     
define  -A_INSTRUCTION           0x1110110011000000     
define D+1_INSTRUCTION           0x1110011111000000     
define A+1_INSTRUCTION           0x1110110111000000     
define D-1_INSTRUCTION           0x1110001110000000     
define A-1_INSTRUCTION           0x1110110010000000     
define D+A_INSTRUCTION           0x1110000010000000     
define D-A_INSTRUCTION           0x1110010011000000     
define A-D_INSTRUCTION           0x1110000111000000     
define D&A_INSTRUCTION           0x1110000000000000     
define D|A_INSTRUCTION           0x1110010101000000     

//a = 1 
define   M_INSTRUCTION           0x1111110000000000     
define 	!M_INSTRUCTION           0x1111110001000000     
define 	-M_INSTRUCTION           0x1111110011000000     
define M+1_INSTRUCTION           0x1111110111000000     
define M-1_INSTRUCTION           0x1111110010000000     
define D+M_INSTRUCTION           0x1111000010000000     
define D-M_INSTRUCTION           0x1111010011000000     
define M-D_INSTRUCTION           0x1111000111000000     
define D&M_INSTRUCTION           0x1111000000000000     
define D|M_INSTRUCTION           0x1111010101000000    

#endif
