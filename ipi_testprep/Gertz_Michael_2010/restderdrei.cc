#include <iostream>

unsigned int rekfunk(unsigned int a)
{
    if (a == 0)
    {
        return 1;
    }
    else if (a%2 == 1)
    {
        return a;
    }
    else
    {
        return rekfunk(a / 2) + rekfunk(2 * a + 1);
    }    
}

int main()
{
    std::cout << rekfunk(0);
}