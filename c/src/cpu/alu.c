#include "../headers/alu.h"

short alu(unsigned short instruction, short x, short y){

    switch(instruction) {
        case 0b101010: //0
            return 0;
            break;
        
        case 0b111111: //1
            return 1;
            break;
        
        case 0b111010: //-1
            return -1;
            break;
        
        case 0b001100: //x
            return x;
            break;
        
        case 0b110000: //y
            return y;
            break;
        
        case 0b001101: //!x
            return ~x;
            break;
        
        case 0b110001: //!y
            return ~y;
            break;
        
        case 0b001111: //-x
            return -x;
            break;
        
        case 0b110011: //-y
            return -y;
            break;
        
        case 0b011111: //x+1
            return x+1;
            break;
        
        case 0b110111: //y+1
            return y+1;
            break;
        
        case 0b001110: //x-1
            return x-1;
            break;
        
        case 0b110010: //y-1
            return y-1;
            break;
        
        case 0b000010: //x+y
            return x+y;
            break;
        
        case 0b010011: //x-y
            return x-y;
            break;
        
        case 0b000111: //y-x
            return y-x;
            break;
        
        case 0b000000: //x&y
            return x&y;
            break;
        
        case 0b010101: //x|y
            return x|y;
            break;


    }

}
