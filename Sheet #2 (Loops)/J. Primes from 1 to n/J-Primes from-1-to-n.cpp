#include <bits/stdc++.h> using namespace std; int main() { int n; int prime; cin>>n; for(int i=2;i<n;i++) { prime = 1; for(int j=2;j<=i;j++) { if(i%j==0 && i!=j) { prime=0; } } if(prime==1) cout<<i<< " "; } }