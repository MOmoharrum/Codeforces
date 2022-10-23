/******************************************************************************


if(pow(a,b)>pow(c,d))
	    cout<<"YES";
	else
	    cout<<"NO";
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c,d;
	cin>>a>>b>>c>>d;

	for(long i=0;i<b;i++){
        a*=a;
    }
    for(long i=0;i<d;i++){
        c*=c;
    }

    if(a>c)
        cout<<"YES";
    else
        cout<<"NO";
}

/*

2^5         3^6
log(2^5)    log(3^6)
5log(2)     6log(3)

*/
