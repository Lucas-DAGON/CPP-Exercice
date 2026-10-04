#ifndef PRINTTERMINAL_HPP
#define PRINTTERMINAL_HPP
#include <string>

class PrintTerminal {
	public:
		PrintTerminal(std::string _text);
		void printMyElement();

	private:
		std::string text;
};

#endif