/*
oop assignment
ID- !600 410 55
Name- INARA ZAHIN HASSAN
*/
#include<iostream>
using namespace std;
class ClassA
{
public:
    int a, b;
    ClassA();
    ~ClassA();
};

ClassA::ClassA()
{
    a = 500;
    b = 200;
}
ClassA::~ClassA()
{
}
class ClassB
{
public:
    int a, b;
    ClassB();
    ~ClassB();
};
ClassB::ClassB()
{
    a = 1000;
    b = 5555;
}


ClassB::~ClassB()
{
}


class Derived: public ClassA, public ClassB
{

public:
    Derived();
    ~Derived();
    void Print_ab();
};
Derived::Derived() : ClassB(), ClassA()
{
}


Derived::~Derived()
{
}

void Derived::Print_ab()
{
    std::cout << "a: " << a<< " b:" << b << std::endl;
}
/* Basically it does not make any difference in which order the two classes are inherited or the constructors are called.
If they have varibles with same name it will always give ambiguity error.Both classA and classB have the same variables though
different values i.e, a,b. Ambiguous error occurs at line 59.
*/

