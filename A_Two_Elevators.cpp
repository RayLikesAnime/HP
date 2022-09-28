#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans1=abs(c-b)+abs(c-1);
        int ans2=a-1;
        if(ans1>ans2)
        cout<<1<<endl;
        else if(ans2>ans1)
        cout<<2<<endl;
        else
        cout<<3<<endl;
    }
}