#include "../headers/controller.h"  
#include "../headers/alu.h"
#include "../headers/constants.h"
#include "../headers/aRegister.h"
#include "../headers/dRegister.h"
#include "../headers/programCounter.h"
#include "../headers/instructionMemory.h"
#include "../headers/memory.h"

#include <stdio.h> //TODO remove!


#define mask_jmp 0000000000000111
#define mask_a   0111111111111111

short handle_alu(unsigned short instruction);

/*
This function could use some refactoring, however it works pretty straight forward as it is now...
*/
void execute(){

    unsigned short temp_instruction;
    temp_instruction = get_instruction();
    
    if((temp_instruction&0b1000000000000000) == 0){ //check if it is an a-instruction...
        set_A_register(temp_instruction);
        increment_program_counter();
    }
    else{
        
        //Calcualte using alu
        short result = handle_alu(temp_instruction);  
        
        
        //figure out where to store the result
        unsigned short dest_temp = temp_instruction;
        dest_temp = dest_temp << 10;
        dest_temp = dest_temp >> 10; //remove all bits around the instruction to just get the destination instruction.
        
        switch(dest_temp){
            case MEMORY_NULL:
                //Empty_instruction
                break;
                
            case MEMORY_M:
                write_to_memory(get_A_register(),result);
                break;
                
            case MEMORY_D:
                set_D_register(result);
                break;
                
            case MEMORY_MD:
                write_to_memory(get_A_register(),result);
                set_D_register(result);
                break;
                
            case MEMORY_A:
                set_A_register(result);
                break;
                
            case MEMORY_AM:
                set_A_register(result);
                write_to_memory(get_A_register(),result);
                break;
                
            case MEMORY_AD:
                set_A_register(result);
                set_D_register(result);
                break;
                
            case MEMORY_AMD:
                set_A_register(result);
                write_to_memory(get_A_register(),result);
                set_D_register(result);
        }
        
        //figure out where to jump
        switch(temp_instruction&mask_jmp){
            case JUMP_NULL:
                increment_program_counter();
                break;
                
            case JUMP_JGT:
                if(result > 0){
                    set_program_counter(get_A_register());
                }
                else{
                    increment_program_counter();
                }
                break;
                
            case JUMP_JEQ:
                if(result == 0){
                    set_program_counter(get_A_register());
                }
                else{
                    increment_program_counter();
                }
                break;
                
            case JUMP_JGE:
                if(result >= 0){
                    set_program_counter(get_A_register());
                }
                else{
                    increment_program_counter();
                }
                break;
                
            case JUMP_JLT:
                if(result < 0){
                    set_program_counter(get_A_register());
                }
                else{
                    increment_program_counter();
                }
                break;
                
            case JUMP_JNE:
                if(result != 0){
                    set_program_counter(get_A_register());
                }
                else{
                    increment_program_counter();
                }
                break;
                
            case JUMP_JLE:
                if(result <= 0){
                    set_program_counter(get_A_register());
                }
                else{
                    increment_program_counter();
                }
                break;
                
            case JUMP_JMP:
                set_program_counter(get_A_register());
                break;
        
        }
        
    }
    
    

}

short handle_alu(unsigned short instruction){
    unsigned short temp = instruction; //used to figure out if small a is 0 or 1.
    temp = temp<<3;
    temp = temp>>15;  
    
    //format the code so that the alu understands it.
    instruction = instruction >> 6;
    instruction = instruction << 6;

    /*
    this could be heavily optimized if one differentiates between when a=0 and a=1, and makes a special case for non commutative operation (A-D,D-A)
    However for clarity this was kept as is.
    */
    if(temp == 0){
    
        switch(instruction){
        
            case ZERO_INSTRUCTION:
                return alu(instruction,0,0);
                break;
                
            case ONE_INSTRUCTION:
                return alu(instruction,0,0);
                break;
                
            case NEG_ONE_INSTRUCTION:
                return alu(instruction,0,0);
                break;
                
            case D_INSTRUCTION:
                return alu(instruction,get_D_register(),0);
                break;
                
            case GET_A_INSTRUCTION:
                return alu(instruction,0,get_A_register());
                break;
                
            case NOT_D_INSTRUCTION:
                return alu(instruction,get_D_register(),0);
                break;
                
            case NOT_A_INSTRUCTION:
                return alu(instruction,0,get_A_register());
                break;
                
            case SUB_D_INSTRUCTION:
                return alu(instruction, get_D_register(),0);
                break;
                
            case SUB_A_INSTRUCTION:
                return alu(instruction,0,get_A_register());
                break;
                
            case D_PLUS_INSTRUCTION:
                return alu(instruction,get_D_register(),0);
                break;
                
            case A_PLUS_INSTRUCTION:
                return alu(instruction,0,get_A_register());
                break;
                
            case D_SUB_INSTRUCTION:
                return alu(instruction,get_D_register(),0);
                break;
                
            case A_SUB_INSTRUCTION:
                return alu(instruction,0,get_A_register());
                break;
                
            case D_PLUS_A_INSTRUCTION:
                return alu(instruction,get_D_register(),get_A_register());
                break;
                
            case D_SUB_A_INSTRUCTION:
                return alu(instruction,get_D_register(),get_A_register());
                break;
                
            case A_SUB_D_INSTRUCTION:
                return alu(instruction,get_D_register(),get_A_register());
                break;
                
            case D_AND_A_INSTRUCTION:
                return alu(instruction,get_D_register(),get_A_register());
                break;
                
            case D_OR_A_INSTRUCTION:
                return alu(instruction,get_D_register(),get_A_register());
                break;
        }
        
    }
    else{
    
        switch(instruction){
            //Implementd the instruction where small a = 1 (That is most memory access functions) TODO
        
        
        }
    
    }
}



