//============================================================================
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

#define PI 3.141592653

int main() {

	cout << fixed << setprecision(9); // to set the precision to 9 digits after the decimal point

	double r;
	cin>> r;
	cout <<  PI*pow(r,2);
}
