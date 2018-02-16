#include "../headers/aRegister.h"


static unsigned short a_register_value;

void set_A_register(unsigned short i){
    a_register_value = i;
}

unsigned short get_A_register(){
    return a_register_value;
}
