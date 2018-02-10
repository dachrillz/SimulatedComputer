#include <CUnit/CUnit.h>

#include "../src/headers/instructionMemory.h"
#include "instructionMemoryTest.h"

//A instruction

void test_A_instruction();

//C instructions a = 0

void test_get_zero(){

    set_instruction_pc(1);
    
    CU_ASSERT_EQUAL(get_instruction(),0b1110101010000000);	


}

void test_get_one();

void test_get_neg_one();

void test_get_D();

void test_get_A();

void test_get_not_D();

void test_get_not_A();

void test_get_neg_D();

void test_get_neg_A();

void test_get_D_plus();

void test_get_A_plus();

void test_get_D_minus();

void test_get_A_minus();

void test_get_A_D_plus();

void test_get_D_A_Minus(); //D-A

void test_get_A_D_Minus(); //A-D

void test_get_D_and_A();

void test_get_D_or_A();

//C instructions a = 1

void test_get_M();

void test_get_not_M();

void test_get_neg_M();

void test_get_M_plus();

void test_get_M_minus();

void test_get_M_D_plus();

void test_get_D_M_minus(); // D-M

void test_get_M_D_minus(); // M-D

void test_get_D_and_M();

void test_get_D_or_M();
