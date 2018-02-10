#include <CUnit/CUnit.h>

#include "../src/headers/programCounter.h"
#include "memoryTest.h"




void test_reset(){

    set_program_counter(0);

   	CU_ASSERT_EQUAL(get_program_counter(),(short) 0);

}



void test_set_then_get(){

    set_program_counter(25);

   	CU_ASSERT_EQUAL(get_program_counter(),(short) 25);

}

void test_set_get_get(){

    set_program_counter(21);
    
    set_program_counter(25);

   	CU_ASSERT_EQUAL(get_program_counter(),(short) 25);

    

}

void test_increment_program_counter(){

    set_program_counter(5);
    
    increment_program_counter();
    
   	CU_ASSERT_EQUAL(get_program_counter(),(short) 6);

}
