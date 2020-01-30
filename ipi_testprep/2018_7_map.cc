#include <iostream>
#include <map>

int main()
{
    std::map <char, int> foo;
    foo['c'] = 1;
    foo['a'] = 2;
    foo['b'] = 3;
    foo['A'] = 0;

    for (std::map<char, int>::iterator it = foo.begin(); it != foo.end(); it++)
    {
        std::cout << it->first << " => " << it->second << std::endl;
    }
    return 0;
}