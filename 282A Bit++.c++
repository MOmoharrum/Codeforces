#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int x=0,n;
    cin>>n;
    while(n--){
        cin>>s;
        if(s == "++X" || s == "X++"){
            x++;
        }
        else if (s == "X--" || s == "--X")
            x--;
    }
    cout<<x;
    
}
