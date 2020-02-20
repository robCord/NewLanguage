#pragma once
class LangMemory
{//creating memory 
public:
	void SetRAMValue (int address, int value);
	int GetRAMValue(int address);
	
private:
	//0-99
	int Ram[100];
};

