#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0)
    {
        cout<<n-3<<" 2 1\n";
    }else{
        n--;
        n/=2;
        if(n%2==0)
        {
            cout<<n+1<<" "<<n-1<<" 1\n";
        }
        else
        {
            cout<<n+2<<" "<<n-2<<" 1\n";
        }
    }
}}