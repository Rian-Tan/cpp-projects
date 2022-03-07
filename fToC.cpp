/*
 * fToC.cpp
 *
 *  Created on: 22 Apr 2021
 *      Author: riantan
 */
#include <iostream>
using namespace std ;

float fToC (float degreesF = 32.0);

int main(){
	float Centigrade , Fahrenheit;
	cout <<"please enter a fahrenheit temperature:\t"<<endl;
	cin >> Fahrenheit;
	Centigrade = fToC(Fahrenheit);
	cout << Fahrenheit <<"F"<<" is "<<Centigrade<<"C";
	cout << endl << "Freezing Point = "<< fToC()<<"C"<<endl;
	return 0;
}

float fToC (float degreesF){
	float degreesC = ((5.0/9.0)*(degreesF - 32.0));
	return degreesC;
}
