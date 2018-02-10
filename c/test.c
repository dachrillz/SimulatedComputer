#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <CUnit/TestRun.h>
#include <stdio.h>
#include <stdlib.h>

/*
Files that are included from the project (src)
*/
#include "src/memory.h"
#include "src/programCounter.h"

/*
Headers that are from the test folder
*/
#include "test/memoryTest.h"
#include "test/programCounterTest.h"

void test_add(void);
void test_minus(void);


int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

int main(void){

   CU_pSuite pSuite = NULL;
   CU_pSuite PC_Suite = NULL;


   /* initialize the CUnit test registry */
   if ( CUE_SUCCESS != CU_initialize_registry() )
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite( "Memory Suite", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if ( (NULL == CU_add_test(pSuite, "test_Load_Before_Anything", test_Load_Before_Anything))||
        (NULL == CU_add_test(pSuite, "test_Load_One_Word_And_Address_then_Load", test_Load_One_Word_And_Address_then_Load))||
        (NULL == CU_add_test(pSuite, "test_Load_One_Word_And_Adress_Change_Word_Then_Load", test_Load_One_Word_And_Adress_Change_Word_Then_Load))||
        //(NULL == CU_add_test(pSuite, "test_reset_Memory", test_reset_Memory)) ||
	(NULL == CU_add_test(pSuite, "test_So_That_Nothing_Is_Written_Withoud_Load", test_So_That_Nothing_Is_Written_Withoud_Load))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add a suite to the registry */
   PC_Suite = CU_add_suite( "Suite for 'Program Counter'", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();
      
   }
   


   /* add the tests to the suite */
   if ( (NULL == CU_add_test(PC_Suite, "test_reset", test_reset))||
        (NULL == CU_add_test(PC_Suite, "test_set_then_get", test_set_then_get))||
        (NULL == CU_add_test(PC_Suite, "test_increment_program_counter", test_increment_program_counter))
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

/*
void test_minus(void){
    CU_ASSERT_EQUAL(minus(2,2),0);
    CU_ASSERT_EQUAL(minus(2,3),-1);

}


void test_add(void){
    CU_ASSERT_EQUAL(add(2,2),4);
    CU_ASSERT_EQUAL(add(2,3),5);

}
*/
