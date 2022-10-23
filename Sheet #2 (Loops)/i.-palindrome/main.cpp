/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int myres1, myres2;
    
    string num1; // "512"  ['5','1','2']
    cin>>num1;
    int size = num1.size();
    char num2[size];
    
    int counter = 0;
    for(int i= size-1;i>=0;i--){
        num2[counter] = num1[i];
        counter++;
    }
    
    
    stringstream s1;
    s1<<num1;
    s1>>myres1;
    stringstream s2;
    s2<<num2;
    s2>>myres2;
    
    cout<<myres2<<endl;
    
    if(myres1 == myres2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}