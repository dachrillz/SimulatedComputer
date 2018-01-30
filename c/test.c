#include <CUnit/CUnit.h>
#include "src/myfile.h"


void test_add(void);

int main(){
test_add();
}





void test_add(void){
    CU_ASSERT(add(2,2) == 5);
    CU_ASSERT(add(2,3) == 5);

}
