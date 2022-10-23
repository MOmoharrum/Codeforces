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
    long long n,e = 0;
    cin>>n;
    for(int i=1;i<=n;){
        if(i%2==0){
            cout<<i<<endl;
            i+=2;
            e++;
        }
        else
            i++;
    }
    if(e==0)
        cout<<-1;
}