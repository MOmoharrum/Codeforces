/******************************************************************************

Correct = Checked and Correct

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    bool flag;
    
    if(n>1){
        for(int i=2;i<n-1;i++){
            if(n%i==0){
                flag = false;
                break;
            }
            else
                flag = true;
        }
    }
    else{
        flag=false;
    }
    
    if(flag==true)
        cout<<"YES";
    else
        cout<<"NO";
}