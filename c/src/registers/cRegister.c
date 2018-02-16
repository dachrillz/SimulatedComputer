#include "../headers/cRegister.h"


static unsigned short c_register_value;

void set_C_register(unsigned short i){
    c_register_value = i;
}

unsigned short get_C_register(){
    return c_register_value;
}

