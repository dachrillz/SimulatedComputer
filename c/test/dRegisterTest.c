#include <CUnit/CUnit.h>
#include "dRegisterTest.h"
#include "../src/headers/dRegister.h"


void test_set_and_get_D_register(){

    set_D_register(300);

    CU_ASSERT_EQUAL(get_D_register(), 300);

}

