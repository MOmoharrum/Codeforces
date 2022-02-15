#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int k=7;
    for(int i=0; i <= n-k;i++){ // this is to prevent you from getting an out of bounds error!!
        int counter = 0;
        for(int j=i; j<= i+k-1; j++){ //starting from i and ending somewhere //try 7 characters
        /***
            if i want k elements --->
            i, i+1, i+2, i+3, i+4   which are 5 elements
            ^
       THEN i+k(the 5 elements)-1
       
       NOTE THAT WE ARE TALKING INDEXES NOW, NOT NUMBERS.
        ***/
            if(s[i] == s[j]){
                counter++;
            }
        }
        if(counter == k){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    
    
    
}
