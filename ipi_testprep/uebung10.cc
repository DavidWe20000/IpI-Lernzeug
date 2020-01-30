#include <iostream>

class A
{
public:
    void a();
    virtual void va() = 0;
    virtual void a(int n);

private:
    void c();
};/*
void A::va() {
    std::cout << "A va()"<< std::endl;
}
*/
void A::a() {
    std::cout << "A a()"<< std::endl;
}

void A::a(int n) {
    std::cout << "A a()"<< n <<  std::endl;
}

class B : public A
{
public:
    void b();
    virtual void vb();
    void a(double d);
    void a(int i);
    virtual void va();
};
void B::b() {
    std::cout << "B b" << std::endl;
}

class C : public B
{
public:
    virtual void c();
    void a(float);
    virtual void a();
    virtual void va();
};

int main()
{

    A a;
    B b;
    C c;
    A *pa = &b;
    
    B *pb = &c;
    float x = 1.2;
    pa->a();
   // pa->va();
   // pa->a(1);
   // pa->c();
   // pa->b();
   /*  pa->vb();
    pa->a(x);
    pb->a();
    pb->va();
    pb->a(1);
    pb->c();
    pb->b();
    pb->vb();
    pb->a(x);
    pa = &c;
    pa->a();
    pa->va();
    pa->a(1);
    pa->c();
    pa->b();
    pa->vb();
    pa->a(x); */
}