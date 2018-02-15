#include <CUnit/CUnit.h>

#include "../src/headers/instructionMemory.h"
#include "instructionMemoryTest.h"
#include "../src/headers/constants.h"

/*
0              1110101010000000     
1              1110111111000000     
-1             1110111010000000     
D              1110001100000000     
A              1110110000000000
!D             1110001101000000     
!A             1110110001000000     
-D             1110001111000000     
-A             1110110011000000     
D+1            1110011111000000     
A+1            1110110111000000     
D-1            1110001110000000     
A-1            1110110010000000     
D+A            1110000010000000     
D-A            1110010011000000     
A-D            1110000111000000     
D&A            1110000000000000     
D|A            1110010101000000
*/

//A instruction

void test_A_instruction();

//C instructions a = 0

void test_get_zero(){
    set_instruction_pc(1);
    CU_ASSERT_EQUAL(get_instruction(),0_INSTRUCTION);	
}

void test_get_one(){
    set_instruction_pc(2);
    CU_ASSERT_EQUAL(get_instruction(),1_INSTRUCTION);
}

void test_get_neg_one(){
    set_instruction_pc(3);
   CU_ASSERT_EQUAL(get_instruction(), -1_INSTRUCTION); 
}


void test_get_D(){
    set_instruction_pc(4);
    CU_ASSERT_EQUAL(get_instruction(),D_INSTRUCTION);
}


void test_get_A(){
    set_instruction_pc(5);
    CU_ASSERT_EQUAL(get_instruction(),A_INSTRUCTION);
}


void test_get_not_D(){
    set_instruction_pc(6);
    CU_ASSERT_EQUAL(get_instruction(),!D_INSTRUCTION);
}


void test_get_not_A(){
    set_instruction_pc(7);
    CU_ASSERT_EQUAL(get_instruction(),!A_INSTRUCTION);
}

void test_get_neg_D(){
    set_instruction_pc(8);
    CU_ASSERT_EQUAL(get_instruction(),-D_INSTRUCTION);
}

void test_get_neg_A(){
    set_instruction_pc(9);
    CU_ASSERT_EQUAL(get_instruction(),-A_INSTRUCTION);
}

void test_get_D_plus(){
    set_instruction_pc(10);
    CU_ASSERT_EQUAL(get_instruction(),D+1_INSTRUCTION);
}

void test_get_A_plus(){
    set_instruction_pc(11);
    CU_ASSERT_EQUAL(get_instruction(),A+1_INSTRUCTION);
}

void test_get_D_minus(){
    set_instruction_pc(12);
    CU_ASSERT_EQUAL(get_instruction(),D-1_INSTRUCTION);
}
        

void test_get_A_minus(){
    set_instruction_pc(13);
    CU_ASSERT_EQUAL(get_instruction(),A-1_INSTRUCTION);
}

void test_get_A_D_plus(){
    set_instruction_pc(14);
    CU_ASSERT_EQUAL(get_instruction(),D+A__INSTRUCTION);
}


void test_get_D_A_Minus(){
    set_instruction_pc(15);
    CU_ASSERT_EQUAL(get_instruction(),D-A__INSTRUCTION);
} //D-A

void test_get_A_D_Minus(){
    set_instruction_pc(16);
    CU_ASSERT_EQUAL(get_instruction(),A-D_INSTRUCTION);
} //A-D

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
