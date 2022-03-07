/*
 * cToK.cpp
 *
 *  Created on: 22 Apr 2021
 *      Author: riantan
 */
#include <iostream>
using namespace std ;

float cToK (float degreesK = 273.15);
int main(){
	float Celsius , Kelvin;
	cout <<"please enter a celcius temperature";
	cin >> Celsius;
	Kelvin = Celsius + 273.15;
	cout <<Celsius<<" C"<<endl<<"is "<<Kelvin<<" K"<<endl;
	return 0;
}
