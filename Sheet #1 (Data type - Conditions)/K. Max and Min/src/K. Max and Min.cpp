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
	int a,b,c,max,min;
	cin>>a>>b>>c;
	if(a<b && a<c)
		min = a;
	else if(b<c)
		min = b;
	else
		min = c;
	if(a>b && a>c)
			max = a;
		else if(b>c)
			max = b;
		else
			max = c;
	cout<<min<<" "<<max;
}
