#include <iostream>
#include <string>
#include "printTerminal.hpp"
#include "complex2D.hpp"

void functionPrint(std::string text)
{
    std::cout << text << std::endl;
}

int main()
{
    std::string hello = "Hello World!";
    // Exercice 1
    std::cout << hello << std::endl;
    functionPrint(hello);
    PrintTerminal classVariable(hello);
    classVariable.printMyElement();

    // Exercice 2
    Complex2D f(3.0, 4.0);
    Complex2D g(4.0);
    Complex2D h;
    Complex2D i(f);

    std::cout << std::endl << "h reel: " << h.getReel()
        << std::endl << "h imaginaire: " << h.getImaginere();
    std::cout << std::endl << "i reel: " << i.getReel()
        << std::endl << "i imaginaire: " << i.getImaginere();

    f.operationAdd(g.getReel(), g.getImaginere());
    g.operationMinus(f.getReel(), f.getImaginere());
    std::cout << std::endl << "f+ reel: " << f.getReel()
        << std::endl << "f+ imaginaire: " << f.getImaginere();
    std::cout << std::endl << "g- reel: " << g.getReel()
        << std::endl << "g- imaginaire: " << g.getImaginere();

    f.operationMult(g.getReel(), g.getImaginere());
    g.operationDiv(f.getReel(), f.getImaginere());
    std::cout << std::endl << "f* reel: " << f.getReel()
        << std::endl << "f* imaginaire: " << f.getImaginere();
    std::cout << std::endl << "g/ reel: " << g.getReel()
        << std::endl << "g/ imaginaire: " << g.getImaginere();

    std::cout << std::endl << "f>: " << f.operationGreatT(g.getReel(), g.getImaginere())
        << std::endl << "f<: " << f.operationLessT(g.getReel(), g.getImaginere());

    return 0;
}