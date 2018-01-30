#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <CUnit/TestRun.h>
#include "src/myfile.h"
#include <stdio.h>
#include <stdlib.h>

void test_add(void);
void test_minus(void);


int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

int main(void){

   CU_pSuite pSuite = NULL;


   /* initialize the CUnit test registry */
   if ( CUE_SUCCESS != CU_initialize_registry() )
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite( "Change this later lol", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if ( (NULL == CU_add_test(pSuite, "test_add", test_add)) ||
        (NULL == CU_add_test(pSuite, "test_minus", test_minus))
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


void test_minus(void){
    CU_ASSERT_EQUAL(minus(2,2),5);
    CU_ASSERT_EQUAL(minus(2,3),5);

}


void test_add(void){
    CU_ASSERT_EQUAL(add(2,2),5);
    CU_ASSERT_EQUAL(add(2,3),5);

}
