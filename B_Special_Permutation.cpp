#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if((a>(n/2)+1 || b<n/2))
        cout<<-1<<endl;
        else {
        for(int i=1;i<=n/2;i++){
            if(i==1)
            cout<<a<<" ";
            else
            cout<<n-i+2<<" ";
        }
        for(int i=((n/2)+1);i<=n;i++){
            if(i==((n/2)+1))
            cout<<b<<" ";
            else
            cout<<i-((n/2)+1)<<" ";

        }
        cout<<endl;


    }}
}