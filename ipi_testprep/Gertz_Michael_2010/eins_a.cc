#include <iostream>

int a = 0;
int func_b(int x)
{
    std::cout << "im called!" << std::endl;
    a = a + x;
    std::cout << a << std::endl;
    return a;
}

int func_a(int x)
{
    int b = x + x;
    return func_b(b) + func_b(b);
}

int main()
{
    int a = 5;
    //std::cout << func_b(10) << std::endl;
    std::cout << func_a(a);
}