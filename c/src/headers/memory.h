#ifndef MEMORY_H_
#define MEMORY_H_

//@TODO: check if these commands can be simplified into 2 commands: load, save

void load(); //write enable bit
void in(short); //What to write
void address(short); //where to write (should be no longer than 15 bits...)

short out(short i);

void reset_Memory();


#endif
