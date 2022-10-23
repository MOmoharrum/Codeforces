//============================================================================
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x,y,summation,multiplication,subtraction;

	cin>>x >> y ;

	if((x >=1 && x <= 100000) && (y >=1 && y <= 100000)){
		summation = x + y;
		multiplication = x * y;
		subtraction = x - y;
	}

	cout<< x << " + " << y << " = " << summation << endl;
	cout<< x << " * " << y << " = " << multiplication << endl;
	cout<< x << " - " << y << " = " << subtraction << endl;
}
