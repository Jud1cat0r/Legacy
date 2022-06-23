#include <iostream>
#include "Legacy.cpp"

string Legacy::rawMaterial = "железо";


int main()
{
    setlocale(LC_ALL, "ru");
    Legacy p("железо");
    p.Production();
    Production1 p1("ножы");
    p1.Production();
    Production2 p2("гвозди");
    p2.Production();
}
