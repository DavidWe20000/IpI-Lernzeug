#include <iostream>

int main()
{
    const int n = 6;
    int x = 0;
    int a[n];
    a[0] = 8; a[1] = 2; a[2] = 3; a[3] = 4 ; a[4] = 8; a[5] = 8;
    for (size_t i = 0; i < n; i = i + 1)
    {
        bool b = false;
        for (size_t j = 0; j < i; j = j + 1)
            if (a[i] == a[j])
                b = true;
            if (b == false)      
                x = x + 1;
    }
    std::cout << x << std::endl;
}