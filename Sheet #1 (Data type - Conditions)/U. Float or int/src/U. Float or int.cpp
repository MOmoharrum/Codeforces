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
	double n;
	cin>>n;
	if(n - (int) n == 0)
	    cout<<"int "<<(long long) n;
	else
	    cout<<"float "<<(long long) n<< " "<< n - (long long) n;
}
