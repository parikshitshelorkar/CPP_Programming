//virtual method..

#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "This is Parent class show()" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "This is Child class show()" << endl;
    }
};

int main() {
    Parent* p;
    Child obj;

    p = &obj;
    p->show();   // Calls Child's show(), not Parent's
}
//Because show() is virtual → decided at runtime.

// This is called Runtime Polymorphism.