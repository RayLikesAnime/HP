#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int r,b,d;
        cin>>r>>b>>d;
        int a=max(r,b);
        int c=min(r,b);
        if((d+1)*c>=a)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}