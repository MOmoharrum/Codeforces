/******************************************************************************

Don't know what is the problem here

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
    
    cout<<"Even: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            cout<<arr[i]<< " ";
    }
    
    cout<<"\nOdd: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0)  // remainder is not equal zero is more accurate
            cout<<arr[i]<< " ";
    }
    
    cout<<"\nPositive: ";
    for(int i=0;i<n;i++){
        if(arr[i]>0)
            cout<<arr[i]<< " ";
    }
    
    cout<<"\nNegative: ";
    for(int i=0;i<n;i++){
        if(arr[i]<0)
            cout<<arr[i]<< " ";
    }
}
