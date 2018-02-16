#include <CUnit/CUnit.h>
#include "aluTest.h"
#include "../src/headers/alu.h"

void alu_zero_test(){
    CU_ASSERT_EQUAL(alu(0b101010,21,20),0);
}

void alu_one_test(){
    CU_ASSERT_EQUAL(alu(0b111111,21,20),1);
}

void alu_minus_one_test(){
    CU_ASSERT_EQUAL(alu(0b111010,21,20),-1);
}

void alu_x(){
    CU_ASSERT_EQUAL(alu(0b001100,21,20),21);
}

void alu_y(){
    CU_ASSERT_EQUAL(alu(0b110000,21,20),20);
}

void alu_not_x(){

    printf("\n");
    printf("%d", 21);
    printf("%d", ~21);
    printf("%d", 0b1111111111101010);
    printf("\n");

    CU_ASSERT_EQUAL(alu(0b001101,21,20),-0b10110);
}

void alu_not_y(){
    CU_ASSERT_EQUAL(alu(0b110001,21,20),-0b10101);
}

void alu_sub_x(){
    CU_ASSERT_EQUAL(alu(0b001111,21,20),-21);
}

void alu_sub_y(){
    CU_ASSERT_EQUAL(alu(0b110011,21,20),-20);
}

void alu_x_plus(){
    CU_ASSERT_EQUAL(alu(0b011111,21,20),22);
}

void alu_y_plus(){
    CU_ASSERT_EQUAL(alu(0b110111,21,20),21);
}

void alu_x_minus(){
    CU_ASSERT_EQUAL(alu(0b001110,21,20),20);
}

void alu_y_minus(){
    CU_ASSERT_EQUAL(alu(0b110010,21,20),19);
}

void alu_x_plus_y(){
    CU_ASSERT_EQUAL(alu(0b000010,21,20),41);
}

void alu_x_sub_y(){
    CU_ASSERT_EQUAL(alu(0b010011,21,20),1);
}

void alu_y_sub_x(){
    CU_ASSERT_EQUAL(alu(0b000111,21,20),-1);
}

void alu_x_and_y(){
    CU_ASSERT_EQUAL(alu(0b000000,21,20),0b10100); 
}

void alu_x_or_y(){
    CU_ASSERT_EQUAL(alu(0b010101,21,20),0b10101);
}


