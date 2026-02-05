//Constructor copy/clone
#include<iostream>
using namespace std;

class Patient {
private:
    int bp;

public:
    Patient(){//Default constructor
        bp=100;
        cout << "Patient admitted. BP recorded."<<endl;

    }

    Patient(int value){//Parameterized constructor
        bp = value;
        cout<< "Patient admitted. BP recorded."<<endl;
    }
    
    Patient(const Patient& other){//Copy constructor
        bp = other.bp;
        cout<<"Patient record copied."<<endl;
    }
    // int id;
    // Patient(int id) : id(id) {}//constructor chaining
    // Patient(const Patient& p) : id(p.id) {}
    void showBP(){
        cout<<"BP"<<bp<<endl;

    }

//destructor cannote be overloaded
    ~Patient(){//Destructor
        cout<<"Patient discharged. Records closed."<<endl;
    }
};

int main(){
    Patient p2;          //invoke default constructor
    Patient p3(78);     //invoke parameterized constructor
    Patient p4 = p3;    //invoke copy constructor

    Patient *ptr = new Patient(66);
    delete(ptr);
    
    return 0;
}
