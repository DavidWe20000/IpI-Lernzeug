#include <iostream>
#include <vector>
#include <algorithm>

class Pointyboi
{
public:

    //int value;
    class Pointyboi *next;
    Pointyboi()// : value(0) 
    {}
    Pointyboi(int v)// : value(v) 
    {std::cout << "i create stuff";}
    Pointyboi(const Pointyboi &boi)// : value(boi.value)
    {
       Pointyboi* next = new Pointyboi(*boi.next);
    }

    /* Pointyboi& operator=(const Pointyboi &boi)
    {
        if (this != &boi)
        {
            if (next != 0)
            {
                value = boi.value;
                *next = *boi.next;
            }
            else
            {
                value = boi.value;
                next = new Pointyboi(*boi.next);
            }           
        }
        return *this;
    } */

    ~Pointyboi()
    {
        std::cout << "i delete myself";
        delete next;
    }
};

int main()
{
    Pointyboi p1;
    //Pointyboi p2(4);

    /* p2.next = &p1;

    //std::cout << p2.next->value;
    std::vector<Pointyboi> pvec;
    pvec.push_back(p1);
    pvec.push_back(*p1.next);
    std::cout << pvec[1].value << " ";
    //std::cout << pvec[1].next->value << " "; */
}