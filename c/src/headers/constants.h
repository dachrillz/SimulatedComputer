#ifndef CONSTANTS_H_
#define CONSTANTS_H_
//#A-instruction
#define   SET_A_INSTRUCTION           	0b0110000000000000
//a = 0
#define     ZERO_INSTRUCTION            0b1110101010000000
#define     ONE_INSTRUCTION             0b1110111111000000
#define     NEG_ONE_INSTRUCTION         0b1110111010000000
#define     D_INSTRUCTION               0b1110001100000000
#define     GET_A_INSTRUCTION           0b1110110000000000
#define     NOT_D_INSTRUCTION           0b1110001101000000
#define     NOT_A_INSTRUCTION           0b1110110001000000
#define     SUB_D_INSTRUCTION           0b1110001111000000
#define     SUB_A_INSTRUCTION           0b1110110011000000
#define     D_PLUS_INSTRUCTION          0b1110011111000000
#define     A_PLUS_INSTRUCTION          0b1110110111000000
#define     D_SUB_INSTRUCTION           0b1110001110000000
#define     A_SUB_INSTRUCTION           0b1110110010000000
#define     D_PLUS_A_INSTRUCTION        0b1110000010000000
#define     D_SUB_A_INSTRUCTION         0b1110010011000000
#define     A_SUB_D_INSTRUCTION         0b1110000111000000
#define     D_AND_A_INSTRUCTION         0b1110000000000000
#define     D_OR_A_INSTRUCTION          0b1110010101000000

//a = 1
#define     M_INSTRUCTION               0b1111110000000000
#define     NOT_M_INSTRUCTION           0b1111110001000000
#define     SUB_M_INSTRUCTION           0b1111110011000000
#define     M_PLUS_INSTRUCTION          0b1111110111000000
#define     M_SUB_INSTRUCTION           0b1111110010000000
#define     D_PLUS_M_INSTRUCTION        0b1111000010000000
#define     D_SUB_M_INSTRUCTION         0b1111010011000000
#define     M_SUB_D_INSTRUCTION         0b1111000111000000
#define     D_AND_M_INSTRUCTION         0b1111000000000000
#define     D_OR_M_INSTRUCTION          0b1111010101000000

//Memory Instructions
#define MEMORY_NULL                     0b000000
#define MEMORY_M                        0b001000
#define MEMORY_D                        0b010000
#define MEMORY_MD                       0b011000
#define MEMORY_A                        0b100000
#define MEMORY_AM                       0b101000
#define MEMORY_AD                       0b110000
#define MEMORY_AMD                      0b111000

//Jump Instructions
#define JUMP_NULL                       0b000
#define JUMP_JGT                        0b001
#define JUMP_JEQ                        0b010
#define JUMP_JGE                        0b011
#define JUMP_JLT                        0b100
#define JUMP_JNE                        0b101
#define JUMP_JLE                        0b110
#define JUMP_JMP                        0b111

#endif
