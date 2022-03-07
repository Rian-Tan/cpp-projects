#include "opp.h"
#include <iostream>
using namespace std ;

calculator::calculator(){
    {status = true;}
}

void calculator::launch(){
    cout<<"**********************************"<<endl<<"welcome to calculator C++ by Rian Tan"<<endl<<"please enter a number, then an operator (+ , - , * , / ) then another number"<<endl<<"Press [enter] to calculate"<<endl<<"press 0 to exit"<<endl<<"**********************************"<<endl ;

}

void calculator::input(){
    cout<<">"; cin>> num1;
    if (num1 == 0) status = false;
    else {cin>> oper; cin>> num2;}
}

void calculator::output(){
    if (status) switch (oper){
        case '+' : {
            cout<<num1 + num2<<endl;break;
        }
        case '-' : {
            cout<<num1 - num2<<endl;break;
        }
        case '*' : {
            cout << num1 * num2<<endl;break;
        }
        case '/' :{
            if (num2 != 0){
                cout << num1 / num2<<endl;
            }
            else {
                cout<< "cannot divide by zero D:"<<endl;
            }
        }
    }

    
}

bool calculator::run(){
    {return status;}
}
 