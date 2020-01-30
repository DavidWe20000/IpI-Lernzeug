#include <iostream>

int main()
{
    const int n = 5;
    int x = 0;
    int a[n];
    a[0] = 2; a[1] = 3; a[2] = 4; a[3] = 2 ; a[4] = 5;
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
