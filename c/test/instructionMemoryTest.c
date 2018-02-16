#include <CUnit/CUnit.h>

#include "../src/headers/instructionMemory.h"
#include "instructionMemoryTest.h"
#include "../src/headers/constants.h"

//A instruction
void test_A_instruction(){
    set_instruction_pc(0);
    CU_ASSERT_EQUAL(get_instruction(),SET_A_INSTRUCTION);
}

//C instructions a = 0

void test_get_zero(){
    set_instruction_pc(1);
    CU_ASSERT_EQUAL(get_instruction(), ZERO_INSTRUCTION);
}

void test_get_one(){
    set_instruction_pc(2);
    CU_ASSERT_EQUAL(get_instruction(), ONE_INSTRUCTION);
}

void test_get_neg_one(){
    set_instruction_pc(3);
   CU_ASSERT_EQUAL(get_instruction(), NEG_ONE_INSTRUCTION);
}


void test_get_D(){
    set_instruction_pc(4);
    CU_ASSERT_EQUAL(get_instruction(),D_INSTRUCTION);
}


void test_get_A(){
    set_instruction_pc(5);
    CU_ASSERT_EQUAL(get_instruction(),GET_A_INSTRUCTION);
}


void test_get_not_D(){
    set_instruction_pc(6);
    CU_ASSERT_EQUAL(get_instruction(),NOT_D_INSTRUCTION);
}


void test_get_not_A(){
    set_instruction_pc(7);
    CU_ASSERT_EQUAL(get_instruction(),NOT_A_INSTRUCTION);
}

void test_get_neg_D(){
    set_instruction_pc(8);
    CU_ASSERT_EQUAL(get_instruction(),SUB_D_INSTRUCTION);
}

void test_get_neg_A(){
    set_instruction_pc(9);
    CU_ASSERT_EQUAL(get_instruction(),SUB_A_INSTRUCTION);
}

void test_get_D_plus(){
    set_instruction_pc(10);
    CU_ASSERT_EQUAL(get_instruction(),D_PLUS_INSTRUCTION);
}

void test_get_A_plus(){
    set_instruction_pc(11);
    CU_ASSERT_EQUAL(get_instruction(),A_PLUS_INSTRUCTION);
}

void test_get_D_minus(){
    set_instruction_pc(12);
    CU_ASSERT_EQUAL(get_instruction(),D_SUB_INSTRUCTION);
}


void test_get_A_minus(){
    set_instruction_pc(13);
    CU_ASSERT_EQUAL(get_instruction(),A_SUB_INSTRUCTION);
}

void test_get_A_D_plus(){
    set_instruction_pc(14);
    CU_ASSERT_EQUAL(get_instruction(),D_PLUS_A_INSTRUCTION);
}


void test_get_D_A_Minus(){
    set_instruction_pc(15);
    CU_ASSERT_EQUAL(get_instruction(),D_SUB_A_INSTRUCTION);
}

void test_get_A_D_Minus(){
    set_instruction_pc(16);
    CU_ASSERT_EQUAL(get_instruction(),A_SUB_D_INSTRUCTION);
}

void test_get_D_and_A(){
    set_instruction_pc(17);
    CU_ASSERT_EQUAL(get_instruction(),D_AND_A_INSTRUCTION);
}

void test_get_D_or_A(){
    set_instruction_pc(18);
    CU_ASSERT_EQUAL(get_instruction(),D_OR_A_INSTRUCTION);
}

//C instructions a = 1

void test_get_M(){
    set_instruction_pc(19);
    CU_ASSERT_EQUAL(get_instruction(),M_INSTRUCTION);
}

void test_get_not_M(){
    set_instruction_pc(20);
    CU_ASSERT_EQUAL(get_instruction(),NOT_M_INSTRUCTION);
}

void test_get_neg_M(){
    set_instruction_pc(21);
    CU_ASSERT_EQUAL(get_instruction(),SUB_M_INSTRUCTION);
}

void test_get_M_plus(){
    set_instruction_pc(22);
    CU_ASSERT_EQUAL(get_instruction(),M_PLUS_INSTRUCTION);
}

void test_get_M_minus(){
    set_instruction_pc(23);
    CU_ASSERT_EQUAL(get_instruction(),M_SUB_INSTRUCTION);
}

void test_get_M_D_plus(){
    set_instruction_pc(24);
    CU_ASSERT_EQUAL(get_instruction(),D_PLUS_M_INSTRUCTION);
}

void test_get_D_M_minus(){
    set_instruction_pc(25);
    CU_ASSERT_EQUAL(get_instruction(),D_SUB_M_INSTRUCTION);
}

void test_get_M_D_minus(){
    set_instruction_pc(26);
    CU_ASSERT_EQUAL(get_instruction(),M_SUB_D_INSTRUCTION);
}

void test_get_D_and_M(){
    set_instruction_pc(27);
    CU_ASSERT_EQUAL(get_instruction(),D_AND_M_INSTRUCTION);
}

void test_get_D_or_M(){
    set_instruction_pc(28);
    CU_ASSERT_EQUAL(get_instruction(),D_OR_M_INSTRUCTION);
}
