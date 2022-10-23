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
	long long x;
    cin>>x;
    if(x<0)
        x*=-1;
	while(x>=10)
	    x/=10;
    if(x%2==0)
        cout<<"EVEN";
    else
        cout<<"ODD";
}
