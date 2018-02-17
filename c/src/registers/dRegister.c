#include "../headers/dRegister.h"


static unsigned short d_register_value;

void set_D_register(unsigned short i){
    d_register_value = i;
}

unsigned short get_D_register(){
    return d_register_value;
}

