#include <CUnit/CUnit.h>
#include "controllerTest.h"
#include "../src/headers/controller.h"
#include "../src/headers/instructionMemory.h"
#include "../src/headers/programCounter.h"
#include "../src/headers/constants.h"
#include "../src/headers/memory.h"
#include "../src/headers/aRegister.h"
#include "../src/headers/dRegister.h"


/*
void execute();

void fetch_instruction();

void execute_instruction();
*/


//general tests

void controller_fetch_test(){
    set_program_counter(0);
    CU_ASSERT_EQUAL(get_instruction(),SET_A_INSTRUCTION);
}

void controller_fetch_execute_fetch(){
    set_program_counter(0);
    //execute(); //should fetch + execute
    
    CU_ASSERT_EQUAL(get_instruction(),ZERO_INSTRUCTION);
    
}

void controller_fetch_execute(){
    set_program_counter(30);
    set_D_register(0);
    set_A_register(0);
    write_in_instruction_memory(get_program_counter(), D_PLUS_INSTRUCTION|MEMORY_M);
    
    CU_ASSERT_EQUAL(read_from_memory(0),1);
    
} 

//d-tests

void test_memory_null();

void test_M();

void test_D();

void test_MD();

void test_A();

void test_AM();

void test_AD();

void test_AMD();

//d-tests

void test_jump_null();

void test_JGT();

void test_JEQ();

void test_JGE();

void test_JLT();

void test_JNE();

void test_JLE();

void JMP();


