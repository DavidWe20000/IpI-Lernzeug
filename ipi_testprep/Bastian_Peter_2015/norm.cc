#include <iostream>

template <typename T>
T norm(T* vec, int size)
{
    T norm = 0;
    for (int i = 0; i < size; ++i)
    {
        norm += vec[i];
    }
    return norm;
}

int main()
{
    float v[3];
    v[0] = 3.; v[1] = -2.; v[2] = -2.;
    float fm = norm(v, 3);
    std::cout << fm;
}