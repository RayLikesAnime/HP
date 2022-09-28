#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%6==0)
        cout<<(n*5)/2<<endl;
        else if(n>6)
        cout<<((n+1)*5)/2<<endl;
        else
        cout<<15<<endl;
    }}