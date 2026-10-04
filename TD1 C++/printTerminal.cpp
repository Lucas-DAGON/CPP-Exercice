#include <iostream>
#include <string>
#include "printTerminal.hpp"

PrintTerminal::PrintTerminal(std::string _text)
{
	text = _text;
}

void PrintTerminal::printMyElement()
{
	std::cout << text;
}