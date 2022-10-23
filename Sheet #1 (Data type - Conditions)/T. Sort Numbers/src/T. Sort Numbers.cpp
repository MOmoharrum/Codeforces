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
	long long x[3],n[3];
	for(int i = 0;i<3;i++){ // input in x
	    cin>>x[i];
	}

	for(int i = 0;i<3;i++){ // copy in n
	    n[i] = x[i];
	}

	for(int i=0;i<3;i++){

	    for(int j=0;j<2-i;j++){

	        if(x[j]>x[j+1]){

	            long long temp = x[j];
	            x[j] = x[j+1];
	            x[j+1] = temp;
	        }
	    }
	}

	for(int i = 0;i<3;i++){
	    cout<<x[i]<<endl;
	}

	cout<<endl;

	for(int i = 0;i<3;i++){
	    cout<<n[i]<<endl;
	}
}
