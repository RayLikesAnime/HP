#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod=1e9+7;
int32_t main(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll c=0;ll d=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1) c++;
            if(x==0) d++;

        }
        cout<<(1ll<<d)*c<<endl;
    }
}