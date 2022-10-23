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
    long long n;
    cin>>n;
    long long arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long long max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    
    cout<<max;
}