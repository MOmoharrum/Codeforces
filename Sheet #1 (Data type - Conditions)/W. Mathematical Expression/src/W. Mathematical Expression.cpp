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
	long long a,b,c;
	char s,q;

	cin>>a>>s>>b>>q>>c;

	if(s=='*'&&q=='='){
	    if((a*b) == c){
	        cout<<"Yes";
	    }
	    else{
	        cout<<a*b;
	    }
	}

    else if(s=='+'&&q=='='){
	    if((a+b) == c){
	        cout<<"Yes";
	    }
	    else{
	        cout<<a+b;
	    }
    }

	else if(s=='-'&&q=='='){
	    if((a-b) == c){
	        cout<<"Yes";
	    }
	    else{
	        cout<<a-b;
	    }
	}
}
