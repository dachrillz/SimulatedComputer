#include "programCounter.h"


static short PC; //@TODO: examine if what length this variable should have!



short get_program_counter(){
    return PC;
}

void set_program_counter(short i){
    PC = i;
}

void increment_program_counter(){
    PC++;    
}

