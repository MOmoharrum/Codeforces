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
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b>=c&&d>=b)
	    cout<<c<<" "<< b;
	else if(a<=d&&b>=d)
	    cout<<a<<" "<<d;
	else if(a==c&&d==b)
	    cout<<b<<" "<< c;
	else
	    cout<< "-1";
}
//draw it to understand it
// there are two models of it and an out of range model
// NOT DONE
