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
	char x;
	cin>>x;
	if(x>=65 && x<=90){
	    char X = x + 32;
	    cout<<X;
	}
	else if(x>=97 && x<=122){
	    char X = x - 32;
	    cout<<X;
	}
}
