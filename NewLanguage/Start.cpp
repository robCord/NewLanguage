#include <iostream>
#include <string>
#include "CommandShell.h"
#include "LangMemory.h"

int main()
{//prompt user 
	std::cout << "\n\n\t *** You have turned the computer on ***\n";
	//prompt user to give a command
	CommandShell command_shell;
	std::cout << "\nComputer ready, command? ";
	
	std::string userCommand;
	getline(std::cin, userCommand);
	command_shell.IntakeCommandFromUser(userCommand);
}