#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,d;
    cin>>n>>d;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int c=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        int a1=d/v[i];
        c=c+a1+1;
        if(c>n)
        break;
        else
        ans++;
    }
    cout<<ans<<endl;
}