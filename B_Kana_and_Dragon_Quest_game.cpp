#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        for(int i=0;i<n;i++){
            if(x<=20)
            break;
        x=(x/2)+10;}
        for(int i=0;i<m;i++)
        x=x-10;
        if(x<=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}