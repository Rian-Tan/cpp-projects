/*
 * loop.cpp
 *
 *  Created on: 21 Apr 2021
 *      Author: riantan
 */
#include <iostream>
using namespace std ;
int main(){
	int i,j;
	for (i=1;i<100000;i++){
		cout<<"loop iteration "<<i<<endl;
		for (j=1;j<4;j++)
			{cout <<" inner loop iteration "<<j<<endl;

			}

	}
}
