#include "CommandShell.h"
#include <iostream>
void CommandShell::IntakeCommandFromUser(std::string commandInput)
{
	ProcessCommand(commandInput);
}

void CommandShell::ProcessCommand(std::string commandToProcess)
{
	if (commandToProcess == "help")
	{
		//todo: display help screen
		DisplayHelp();
	}
	else if(commandToProcess == "displaymem" || commandToProcess == "dm")
	{
		//todo: display entire contents of memory
		std::cout << "\nCommand not available";
	}
	else if(commandToProcess == "load")
	{
		//todo: load program from file into memory
		//into the array
		std::cout << "\nCommand not available";
	}
	else if (commandToProcess == "run")
	{
		//todo: start and run code
		std::cout << "\nCommand not available";
		
	}
	else if (commandToProcess == "exit")
	{
		//todo: exit this shell, like turning off the computer
		std::cout << "\nCommand not available";
	}
	else
	{//unknown input error handler
		std::cout << "\nUnknown command!\n";
	}
}
//display help function gives output from user input 'help'
void CommandShell::DisplayHelp()
{
	std::cout << "\n\n\t*** Help Menu ***\n";
	std::cout << "\nHelp - display help screen";
	std::cout << "\nDisplayMem - display entire contents of memory";
	std::cout << "\nLoad - load program from file into memory";
	std::cout << "\nRun - start and run code";
	std::cout << "\nExit - exit this shell, like turning off the computer";
}
