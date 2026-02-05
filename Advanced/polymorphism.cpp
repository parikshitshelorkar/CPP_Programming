#include <iostream>
using namespace std;

class Payment{
    void (*pay)(float);

    void creditPay(float amount){
        cout<<"Paid %2f using Credit Card"<<amount<<endl;

    }
    void debitPay(float amount){
        cout<<"Paid %2f using Debit Card"<<amount<<endl;
    }
};

int main(){
    class Payment payment;

    payment.pay = creditPay;
    payment.pay(1000);

    payment.pay

}

