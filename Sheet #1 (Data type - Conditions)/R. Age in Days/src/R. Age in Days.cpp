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
	long long a,years=0,months=0;
	cin>>a;
	while(a>=365){
	    a-=365;
	    years++;
	}
	while(a>=30){
	    a-=30;
	    months++;
	}
	cout<<years<<" years"<<endl;
	cout<<months<<" months"<<endl;
	cout<<a<<" days"<<endl;
}
