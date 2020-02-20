#pragma once
#include <string>
class CommandShell
{
public:
	//intake user input
	void IntakeCommandFromUser(std::string commandInput);
	
	//process command
private:
	void ProcessCommand(std::string commandToProcess);
	void DisplayHelp();
};

