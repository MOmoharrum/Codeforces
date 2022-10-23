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

	if(s==42)
	    cout<<a*b;

	else if(s==47)
	    cout<<a/b;

    else if(s==43)
	    cout<<a+b;

	else if(s==45)
	    cout<<a-b;
}
