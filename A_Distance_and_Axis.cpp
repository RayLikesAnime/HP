#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k)
        cout<<k-n<<endl;
        else if(n%2==k%2)
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }
}