#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if((n*m)-1==k || (m*n)-1==k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}