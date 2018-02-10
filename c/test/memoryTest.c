#include <CUnit/CUnit.h>

#include "../src/headers/memory.h"
#include "memoryTest.h"


int i; // For for loopts


void test_Load_Before_Anything(void){
	//Load should make it so that we load a bit that we want to store in the memory.
	reset_Memory();
	
	load();

	CU_ASSERT_EQUAL(out(0),(short) 0); //This syntax could be wrong...
}

void test_Load_One_Word_And_Address_then_Load(void){
	reset_Memory();

	in(45);
	
	address(32);

	load();

	CU_ASSERT_EQUAL(out(32),45);	

}

void test_Load_One_Word_And_Adress_Change_Word_Then_Load(void){
	reset_Memory();

	in(0b1111111111111111);
	
	address(32);

	in(0b0001111111111111);


	load();

	CU_ASSERT_EQUAL(out(32),0b0001111111111111);	



}

void test_reset_Memory(void){
	reset_Memory();


	for(i=0; i<24576; i++){ //Not sure if this is correct length lol.... (@TODO: change when keyboard is added!)
		CU_ASSERT_EQUAL(out(i),0);
	}

}

void test_So_That_Nothing_Is_Written_Withoud_Load(){
	reset_Memory();

	in(0b1111111111111111);
	
	address(32);

	CU_ASSERT_EQUAL(out(32),0);	


}
