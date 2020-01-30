#include <iostream>

int f[5] = {1,5,4,2,3};

void tausche(int &a, int &b)
{
    int h = a;
    a = b;
    b = h;
}

void insertionHelper(int j)
{
    while (j > 0 and f[j -1] > f[j])
    {
        tausche(f[j-1], f[j]);
        j--;
    }
}

int main()
{
    /* for (int i = 0; i < 5; ++i)
    {
        std::cout << f[i] << " ";
    } */
    std::cout << std::endl;
    int i;
    for (i = 1; i <= 5; i++)
    {
        insertionHelper(i);
        for (int i = 0; i < 5; ++i)
        {
        std::cout << f[i] << " ";
        }
        std::cout << std::endl;
    }

    /* for (int i = 0; i < 5; ++i)
    {
        std::cout << f[i] << " ";
    } */
}