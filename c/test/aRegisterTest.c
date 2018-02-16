#include <CUnit/CUnit.h>
#include "aRegisterTest.h"
#include "../src/headers/aRegister.h"


void test_set_and_get_A_register(){
    
    set_A_register(425);
    
    CU_ASSERT_EQUAL(get_A_register(), 425);

}
