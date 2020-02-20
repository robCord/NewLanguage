#include "LangMemory.h"

void LangMemory::SetRAMValue(int address, int value)
{
	//todo: check to make sure addresss aka index is 0-99
	//before setting
	//todo:check to make sure each value is always 4 digits long
	Ram[address] = value;
}

int LangMemory::GetRAMValue(int address)
{
	return Ram[address];
}


	
