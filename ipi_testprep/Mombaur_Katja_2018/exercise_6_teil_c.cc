#include <iostream>

int* f()
{
    const int n = 1000;
    static int p[n];
    p[0] = 0;
    for (int i = 0; i < n; i++)
    {
        p[i + 1] = p[i];
    }
    return p;
}

int main()
{
    std::cout << f();
}