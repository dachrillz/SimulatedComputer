#include <CUnit/CUnit.h>
#include "aluTest.h"
#include "../src/headers/alu.h"
#include "../src/headers/constants.h"

void alu_zero_test(){
    CU_ASSERT_EQUAL(alu(ZERO_INSTRUCTION,21,20),0);
}

void alu_one_test(){
    CU_ASSERT_EQUAL(alu(ONE_INSTRUCTION,21,20),1);
}

void alu_minus_one_test(){
    CU_ASSERT_EQUAL(alu(NEG_ONE_INSTRUCTION,21,20),-1);
}

void alu_x(){
    CU_ASSERT_EQUAL(alu(D_INSTRUCTION,21,20),21);
}

void alu_y(){
    CU_ASSERT_EQUAL(alu(GET_A_INSTRUCTION,21,20),20);
}

void alu_not_x(){
    CU_ASSERT_EQUAL(alu(NOT_D_INSTRUCTION,21,20),-0b10110);
}

void alu_not_y(){
    CU_ASSERT_EQUAL(alu(NOT_A_INSTRUCTION,21,20),-0b10101);
}

void alu_sub_x(){
    CU_ASSERT_EQUAL(alu(SUB_D_INSTRUCTION,21,20),-21);
}

void alu_sub_y(){
    CU_ASSERT_EQUAL(alu(SUB_A_INSTRUCTION,21,20),-20);
}

void alu_x_plus(){
    CU_ASSERT_EQUAL(alu(D_PLUS_INSTRUCTION,21,20),22);
}

void alu_y_plus(){
    CU_ASSERT_EQUAL(alu(A_PLUS_INSTRUCTION,21,20),21);
}

void alu_x_minus(){
    CU_ASSERT_EQUAL(alu(D_SUB_INSTRUCTION,21,20),20);
}

void alu_y_minus(){
    CU_ASSERT_EQUAL(alu(A_SUB_INSTRUCTION,21,20),19);
}

void alu_x_plus_y(){
    CU_ASSERT_EQUAL(alu(D_PLUS_A_INSTRUCTION,21,20),41);
}

void alu_x_sub_y(){
    CU_ASSERT_EQUAL(alu(D_SUB_A_INSTRUCTION,21,20),1);
}

void alu_y_sub_x(){
    CU_ASSERT_EQUAL(alu(A_SUB_D_INSTRUCTION,21,20),-1);
}

void alu_x_and_y(){
    CU_ASSERT_EQUAL(alu(D_AND_A_INSTRUCTION,21,20),0b10100); 
}

void alu_x_or_y(){
    CU_ASSERT_EQUAL(alu(D_OR_A_INSTRUCTION,21,20),0b10101);
}


