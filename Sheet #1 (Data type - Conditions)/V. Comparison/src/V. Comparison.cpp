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
	long long a,b;
	char s;

	cin>>a>>s>>b;

	if(s==60){
	    if(a<b)
	        cout<<"Right";
	    else
	        cout<<"Wrong";
	}

	if(s==61){
	    if(a==b)
	        cout<<"Right";
	    else
	        cout<<"Wrong";
	}
	if(s==62){
	    if(a>b)
	        cout<<"Right";
	    else
	        cout<<"Wrong";
	}
}
