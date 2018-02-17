#include <CUnit/CUnit.h>

#include "../src/headers/memory.h"
#include "memoryTest.h"


int i; // For for loopts


void test_Load_Before_Anything(void){
	//Load should make it so that we load a bit that we want to store in the memory.
	reset_memory();

	CU_ASSERT_EQUAL(read_from_memory(0),(short) 0); //This syntax could be wrong...
}

void test_Load_One_Word_And_Address_then_Load(void){
	reset_memory();

	write_to_memory(45,32);

	CU_ASSERT_EQUAL(read_from_memory(45),32);	

}

void test_reset_memory(void){
	reset_memory();


	for(i=0; i<24576; i++){ //Not sure if this is correct length lol.... (@TODO: change when keyboard is added!)
		CU_ASSERT_EQUAL(read_from_memory(i),0);
	}

}
