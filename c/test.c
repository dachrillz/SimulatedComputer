#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <CUnit/TestRun.h>
#include <stdio.h>
#include <stdlib.h>

/*
Files that are included from the project (src)
*/
#include "src/headers/memory.h"
#include "src/headers/programCounter.h"
#include "src/headers/instructionMemory.h"
#include "src/headers/aRegister.h"
#include "src/headers/dRegister.h"
#include "src/headers/alu.h"
#include "src/headers/controller.h"

/*
Headers that are from the test folder
*/
#include "test/memoryTest.h"
#include "test/programCounterTest.h"
#include "test/instructionMemoryTest.h"
#include "test/aRegisterTest.h"
#include "test/dRegisterTest.h"
#include "test/aluTest.h"
#include "test/controllerTest.h"

void test_add(void);
void test_minus(void);


int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

int main(void){

   CU_pSuite pSuite = NULL;
   CU_pSuite PC_Suite = NULL;
   CU_pSuite instruction_memory_suite = NULL;
   CU_pSuite Register_Suite = NULL;
   CU_pSuite ALU_Suite = NULL;
   CU_pSuite Instruction_Suite = NULL;


   /* initialize the CUnit test registry */
   if ( CUE_SUCCESS != CU_initialize_registry() )
      return CU_get_error();

   /* add MEMORY SUITE*/
   pSuite = CU_add_suite( "Memory Suite", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if ( (NULL == CU_add_test(pSuite, "test_Load_Before_Anything", test_Load_Before_Anything))||
        (NULL == CU_add_test(pSuite, "test_Load_One_Word_And_Address_then_Load", test_Load_One_Word_And_Address_then_Load))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add PC SUITE*/
   PC_Suite = CU_add_suite( "Suite for 'Program Counter'", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();

   }


   /* add the tests to the suite */
   if ( (NULL == CU_add_test(PC_Suite, "test_reset", test_reset))||
        (NULL == CU_add_test(PC_Suite, "test_set_then_get", test_set_then_get))||
        (NULL == CU_add_test(PC_Suite, "test_set_get_get", test_set_get_get))||
        (NULL == CU_add_test(PC_Suite, "test_increment_program_counter", test_increment_program_counter))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

  /* add a suite to the registry */
   instruction_memory_suite = CU_add_suite( "Suite for Instruction Memory", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();

   }


   /* add the tests to the suite */
   if (
        (NULL == CU_add_test(instruction_memory_suite, "test_A_instruction", test_A_instruction))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_zero", test_get_zero))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_one", test_get_one))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_neg_one", test_get_neg_one))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D", test_get_D))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_A", test_get_A))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_not_D", test_get_not_D))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_not_A", test_get_not_A))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_neg_D", test_get_neg_D))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_neg_A", test_get_neg_A))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_plus", test_get_D_plus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_A_plus", test_get_A_plus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_minus", test_get_D_minus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_A_minus", test_get_A_minus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_A_D_plus", test_get_A_D_plus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_A_Minus", test_get_D_A_Minus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_A_D_Minus", test_get_A_D_Minus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_and_A", test_get_D_and_A))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_or_A", test_get_D_or_A))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_M", test_get_M))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_not_M", test_get_not_M))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_neg_M", test_get_neg_M))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_M_plus", test_get_M_plus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_M_minus", test_get_M_minus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_M_D_plus", test_get_M_D_plus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_M_minus", test_get_D_M_minus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_M_D_minus", test_get_M_D_minus))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_and_M", test_get_D_and_M))||
        (NULL == CU_add_test(instruction_memory_suite, "test_get_D_or_M", test_get_D_or_M))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

      /* add REGISTER SUITE*/
   Register_Suite = CU_add_suite( "Register Suite", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();

   }


   /* add Register tests */
   if ( (NULL == CU_add_test(Register_Suite, "test_set_and_get_A_register", test_set_and_get_A_register))||
        (NULL == CU_add_test(Register_Suite, "test_set_and_get_D_register", test_set_and_get_D_register))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }
   
   /* add ALU SUITE*/
   ALU_Suite = CU_add_suite( "Register Suite", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();

   }


   /* add Register tests */
   if ( (NULL == CU_add_test(ALU_Suite, "alu_zero_test", alu_zero_test))||
        (NULL == CU_add_test(ALU_Suite, "alu_one_test", alu_one_test))||
        (NULL == CU_add_test(ALU_Suite, "alu_minus_one_test", alu_minus_one_test))||
        (NULL == CU_add_test(ALU_Suite, "alu_x", alu_x))||
        (NULL == CU_add_test(ALU_Suite, "alu_y", alu_y))||
        (NULL == CU_add_test(ALU_Suite, "alu_not_x", alu_not_x))||
        (NULL == CU_add_test(ALU_Suite, "alu_not_y", alu_not_y))||
        (NULL == CU_add_test(ALU_Suite, "alu_sub_x", alu_sub_x))||
        (NULL == CU_add_test(ALU_Suite, "alu_sub_y", alu_sub_y))||
        (NULL == CU_add_test(ALU_Suite, "alu_x_plus", alu_x_plus))||
        (NULL == CU_add_test(ALU_Suite, "alu_y_plus", alu_y_plus))||
        (NULL == CU_add_test(ALU_Suite, "alu_x_minus", alu_x_minus))||
        (NULL == CU_add_test(ALU_Suite, "alu_y_minus", alu_y_minus))||
        (NULL == CU_add_test(ALU_Suite, "alu_x_plus_y", alu_x_plus_y))||
        (NULL == CU_add_test(ALU_Suite, "alu_x_sub_y", alu_x_sub_y))||
        (NULL == CU_add_test(ALU_Suite, "alu_y_sub_x", alu_y_sub_x))||
        (NULL == CU_add_test(ALU_Suite, "alu_x_and_y", alu_x_and_y))||
        (NULL == CU_add_test(ALU_Suite, "alu_x_or_y", alu_x_or_y))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }
   
    /* add instruction SUITE*/
   Instruction_Suite = CU_add_suite( "Instruction_Suite", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();

   }


   /* add INSTRUCTION tests */
   if ( (NULL == CU_add_test(Instruction_Suite, "test_simple_execute_program_counter", test_simple_execute_program_counter))||
        (NULL == CU_add_test(Instruction_Suite, "test_simple_execute_a_register_value", test_simple_execute_a_register_value))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }




   // Run all tests using the basic interface
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   printf("\n");
   CU_basic_show_failures(CU_get_failure_list());
   printf("\n\n");

   int numberOfFails = (int) CU_get_number_of_tests_failed();
   if (numberOfFails != 0){
      CU_cleanup_registry();
      exit(EXIT_FAILURE);
   }

   /* Clean up registry and return */
   CU_cleanup_registry();
   return CU_get_error();



}
