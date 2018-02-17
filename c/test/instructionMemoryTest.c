#include <CUnit/CUnit.h>

#include "../src/headers/instructionMemory.h"
#include "instructionMemoryTest.h"
#include "../src/headers/constants.h"
#include "../src/headers/programCounter.h"

//A instruction
void test_A_instruction(){
    set_program_counter(0);
    CU_ASSERT_EQUAL(get_instruction(),SET_A_INSTRUCTION);
}

//C instructions a = 0

void test_get_zero(){
    set_program_counter(1);
    CU_ASSERT_EQUAL(get_instruction(), ZERO_INSTRUCTION);
}

void test_get_one(){
    set_program_counter(2);
    CU_ASSERT_EQUAL(get_instruction(), ONE_INSTRUCTION);
}

void test_get_neg_one(){
    set_program_counter(3);
   CU_ASSERT_EQUAL(get_instruction(), NEG_ONE_INSTRUCTION);
}


void test_get_D(){
    set_program_counter(4);
    CU_ASSERT_EQUAL(get_instruction(),D_INSTRUCTION);
}


void test_get_A(){
    set_program_counter(5);
    CU_ASSERT_EQUAL(get_instruction(),GET_A_INSTRUCTION);
}


void test_get_not_D(){
    set_program_counter(6);
    CU_ASSERT_EQUAL(get_instruction(),NOT_D_INSTRUCTION);
}


void test_get_not_A(){
    set_program_counter(7);
    CU_ASSERT_EQUAL(get_instruction(),NOT_A_INSTRUCTION);
}

void test_get_neg_D(){
    set_program_counter(8);
    CU_ASSERT_EQUAL(get_instruction(),SUB_D_INSTRUCTION);
}

void test_get_neg_A(){
    set_program_counter(9);
    CU_ASSERT_EQUAL(get_instruction(),SUB_A_INSTRUCTION);
}

void test_get_D_plus(){
    set_program_counter(10);
    CU_ASSERT_EQUAL(get_instruction(),D_PLUS_INSTRUCTION);
}

void test_get_A_plus(){
    set_program_counter(11);
    CU_ASSERT_EQUAL(get_instruction(),A_PLUS_INSTRUCTION);
}

void test_get_D_minus(){
    set_program_counter(12);
    CU_ASSERT_EQUAL(get_instruction(),D_SUB_INSTRUCTION);
}


void test_get_A_minus(){
    set_program_counter(13);
    CU_ASSERT_EQUAL(get_instruction(),A_SUB_INSTRUCTION);
}

void test_get_A_D_plus(){
    set_program_counter(14);
    CU_ASSERT_EQUAL(get_instruction(),D_PLUS_A_INSTRUCTION);
}


void test_get_D_A_Minus(){
    set_program_counter(15);
    CU_ASSERT_EQUAL(get_instruction(),D_SUB_A_INSTRUCTION);
}

void test_get_A_D_Minus(){
    set_program_counter(16);
    CU_ASSERT_EQUAL(get_instruction(),A_SUB_D_INSTRUCTION);
}

void test_get_D_and_A(){
    set_program_counter(17);
    CU_ASSERT_EQUAL(get_instruction(),D_AND_A_INSTRUCTION);
}

void test_get_D_or_A(){
    set_program_counter(18);
    CU_ASSERT_EQUAL(get_instruction(),D_OR_A_INSTRUCTION);
}

//C instructions a = 1

void test_get_M(){
    set_program_counter(19);
    CU_ASSERT_EQUAL(get_instruction(),M_INSTRUCTION);
}

void test_get_not_M(){
    set_program_counter(20);
    CU_ASSERT_EQUAL(get_instruction(),NOT_M_INSTRUCTION);
}

void test_get_neg_M(){
    set_program_counter(21);
    CU_ASSERT_EQUAL(get_instruction(),SUB_M_INSTRUCTION);
}

void test_get_M_plus(){
    set_program_counter(22);
    CU_ASSERT_EQUAL(get_instruction(),M_PLUS_INSTRUCTION);
}

void test_get_M_minus(){
    set_program_counter(23);
    CU_ASSERT_EQUAL(get_instruction(),M_SUB_INSTRUCTION);
}

void test_get_M_D_plus(){
    set_program_counter(24);
    CU_ASSERT_EQUAL(get_instruction(),D_PLUS_M_INSTRUCTION);
}

void test_get_D_M_minus(){
    set_program_counter(25);
    CU_ASSERT_EQUAL(get_instruction(),D_SUB_M_INSTRUCTION);
}

void test_get_M_D_minus(){
    set_program_counter(26);
    CU_ASSERT_EQUAL(get_instruction(),M_SUB_D_INSTRUCTION);
}

void test_get_D_and_M(){
    set_program_counter(27);
    CU_ASSERT_EQUAL(get_instruction(),D_AND_M_INSTRUCTION);
}

void test_get_D_or_M(){
    set_program_counter(28);
    CU_ASSERT_EQUAL(get_instruction(),D_OR_M_INSTRUCTION);
}
