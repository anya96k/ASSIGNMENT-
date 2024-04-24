
#include<iostream>
using namespace std;

class A {
public:int A=12;
    virtual display() {
        cout << "A" << endl;
    }
};

class B : public A {
public:int B=13;
    virtual display() {
        cout << "B" << endl;
    }
};

class C : public A {
public:int C=14;
    virtual display() {
        cout << "C" << endl;
    }
};

class D : public B, public C {
};

int main() {
    D d;
    d.B;
    d.C;
   
    return 0;
}  
