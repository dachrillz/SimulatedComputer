#include "../headers/alu.h"
#include "../headers/constants.h"

short alu(unsigned short instruction, short x, short y){

    switch(instruction) {
        case ZERO_INSTRUCTION: //0
            return 0;
            break;
        
        case ONE_INSTRUCTION: //1
            return 1;
            break;
        
        case NEG_ONE_INSTRUCTION: //-1
            return -1;
            break;
        
        case D_INSTRUCTION: //x
            return x;
            break;
        
        case GET_A_INSTRUCTION: //y
            return y;
            break;
        
        case NOT_D_INSTRUCTION: //!x
            return ~x;
            break;
        
        case NOT_A_INSTRUCTION: //!y
            return ~y;
            break;
        
        case SUB_D_INSTRUCTION: //-x
            return -x;
            break;
        
        case SUB_A_INSTRUCTION: //-y
            return -y;
            break;
        
        case D_PLUS_INSTRUCTION: //x+1
            return x+1;
            break;
        
        case A_PLUS_INSTRUCTION: //y+1
            return y+1;
            break;
        
        case D_SUB_INSTRUCTION: //x-1
            return x-1;
            break;
        
        case A_SUB_INSTRUCTION: //y-1
            return y-1;
            break;
        
        case D_PLUS_A_INSTRUCTION: //x+y
            return x+y;
            break;
        
        case D_SUB_A_INSTRUCTION: //x-y
            return x-y;
            break;
        
        case A_SUB_D_INSTRUCTION: //y-x
            return y-x;
            break;
        
        case D_AND_A_INSTRUCTION: //x&y
            return x&y;
            break;
        
        case D_OR_A_INSTRUCTION: //x|y
            return x|y;
            break;


    }

}
