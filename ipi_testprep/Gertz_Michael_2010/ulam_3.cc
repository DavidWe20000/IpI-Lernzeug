#include <iostream>

int Ulam(int n)
{
    if (n == 1)
    {
        std::cout << 1 << " ";
        return 1;
    }
    else if (n%2 == 0)
    {
        std::cout << 0.5 * n << " ";
        return Ulam(0.5 * n);
    }
    else
    {
        std::cout << 3 * n + 1 << " ";
        return Ulam(3 * n + 1);
    }   
}

int main()
{
    for (int i = 1; i < 13; ++i)
    {
        Ulam(i);
        std::cout << std::endl;
    }
   // Ulam(12);
}