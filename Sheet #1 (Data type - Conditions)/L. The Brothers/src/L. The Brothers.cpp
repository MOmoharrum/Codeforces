//============================================================================
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
	string firstname1,lastname1,firstname2,lastname2;

	cin>> firstname1>>lastname1>>firstname2>>lastname2; // this is the best way to write the cin

	if(lastname1==lastname2)
		cout<<"ARE Brothers";
	else
		cout<<"Not";
}
