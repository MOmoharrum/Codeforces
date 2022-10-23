/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    long long p = 1999,n;
    
    do{
        cin>>n;
        if(n == 1999){
            cout<<"Correct";
            
        }
        else
            cout<<"Wrong"<<endl;
    }while(n!=p);
}