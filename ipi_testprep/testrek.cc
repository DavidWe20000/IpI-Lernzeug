#include <iostream>
#include <vector>
int fibonacci(int n)
{
    std::vector<int> p(n + 1);
    p.at(0) = 0;
    p.at(1) = 1;
    for (int i = 2; i <= n; i++)
    {
        p.at(i) = p.at(i - 1) + p.at(i - 2);
    }
    return p[n];
}

int main()
{
    std::cout << fibonacci(6);
}