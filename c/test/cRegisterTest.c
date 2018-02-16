#include <CUnit/CUnit.h>
#include "cRegisterTest.h"
#include "../src/headers/cRegister.h"


void test_set_and_get_C_register(){

    set_C_register(300);

    CU_ASSERT_EQUAL(get_C_register(), 300);

}

