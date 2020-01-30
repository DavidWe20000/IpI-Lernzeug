#include <iostream>

class A {
   public:
       int *p;

       A() : p(0) {}
       A(const A& other) { // copy constructor
           p = new int(*other.p);
       }

       A& operator=(const A& other) { // copy assignment constructor
           // protect against self assignment
           if (this != &other) {
               if (p != 0) {
                   *p = *other.p;
               } else { // p is null - no memory allocated yet
                   p = new int(*other.p);
               }
           }
           return *this;
       }

       ~A() { // destructor
           delete p;
       }
};


int main() {
    A a,b;
    a.p = new int(10);
    b = a;

    std::cout << "*(a.p) = " << *(a.p) << std::endl; // 10
    std::cout << "*(b.p) = " << *(b.p) << std::endl; // 10

    *(b.p) = 3;

    std::cout << "*(a.p) = " << *(a.p) << std::endl; // 10
    std::cout << "*(b.p) = " << *(b.p) << std::endl; // 3

    return 0;
}