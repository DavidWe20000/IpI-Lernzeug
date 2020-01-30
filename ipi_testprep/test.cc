class A
{
public:
    void a();
    virtual void va() = 0;
    virtual void a(int n);

private:
    void c();
};
class B : public A
{
public:
    void b();
    virtual void vb();
    void a(double d);
    void a(int i);
    virtual void va();
};
class C : public B
{
public:
    virtual void c();
    void a(float);
    virtual void a();
    virtual void va();
};