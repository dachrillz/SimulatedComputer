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

void test_simple_execute_program_counter(){
    reset_memory();
    set_program_counter(0);
    set_D_register(0);
    set_A_register(0b1111);

    execute();
    CU_ASSERT_EQUAL(get_program_counter(),1);

}

void test_simple_execute_a_register_value(){
    reset_memory();
    set_program_counter(0);
    set_D_register(0);
    set_A_register(0b1111);

    execute();
    CU_ASSERT_EQUAL(get_A_register(),0);

}

//d-tests

void test_memory_null(){
    reset_memory();
    set_program_counter(30);
    set_D_register(0);
    set_A_register(0);
    write_in_instruction_memory(get_program_counter(), D_PLUS_INSTRUCTION|MEMORY_NULL);
    execute();
    CU_ASSERT_EQUAL(read_from_memory(0),0);
    CU_ASSERT_EQUAL(get_D_register(),0);
    CU_ASSERT_EQUAL(get_A_register(),0);
}

void test_M_with_D_plus_instruction(){
    reset_memory();
    set_program_counter(30);
    set_D_register(0);
    set_A_register(1);
    write_in_instruction_memory(get_program_counter(), D_PLUS_INSTRUCTION|MEMORY_M);
    
    execute();
    
    CU_ASSERT_EQUAL(read_from_memory(1),1);
    CU_ASSERT_EQUAL(get_D_register(0),0);
    CU_ASSERT_EQUAL(get_A_register(),1);

}

void test_D(){
    reset_memory();
    set_program_counter(30);
    set_D_register(10);
    set_A_register(0);
    write_in_instruction_memory(get_program_counter(), D_PLUS_INSTRUCTION|MEMORY_D);
    
    execute();
    
    CU_ASSERT_EQUAL(read_from_memory(1),0);
    CU_ASSERT_EQUAL(get_D_register(0),11);
    CU_ASSERT_EQUAL(get_A_register(),0);
}

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


