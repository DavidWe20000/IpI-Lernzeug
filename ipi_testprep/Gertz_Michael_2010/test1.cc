#include <iostream>

class A {
   public:
       int *p;
};

int main() {
    A a,b;
    a.p = new int(10);
    b = a;

    std::cout << "*(a.p) = " << *(a.p) << std::endl; // 10
    std::cout << "*(b.p) = " << *(b.p) << std::endl; // 10

    *(b.p) = 3;

    std::cout << "*(a.p) = " << *(a.p) << std::endl; // 3
    std::cout << "*(b.p) = " << *(b.p) << std::endl; // 3

    return 0;
}