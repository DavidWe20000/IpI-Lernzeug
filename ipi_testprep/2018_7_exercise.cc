#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v = {7, 5, 16, 18, 98};
    v[7] = 8;
    std::cout << v.size() << std::endl;
    v.resize(v.size() * 2);
    std::cout << v.size() << std::endl;
    std::list<std::string> list;

    return 0;
}