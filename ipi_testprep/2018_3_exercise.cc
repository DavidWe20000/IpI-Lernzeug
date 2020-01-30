#include <iostream>
#include <cmath>

double myFunc(double x)
{
    return pow(2,x);
}

double myFuncDeriv(double x)
{
    return pow(2,x) * log(2);
}

double myMethod(double d)
{
    double s = d, e = 1, f = 1e-5;
    while (abs(e) > f)
    {
        e = myFunc(s) / myFuncDeriv(s);
        s -= e;
    }
    return s;
}

int main()
{
    double Eingabe;
    std::cout << "Choose a number!" << std::endl;
    std::cin >> Eingabe;
    std::cout << myMethod(Eingabe) << std::endl;
    return 0;
}