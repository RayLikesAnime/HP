#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    vector<int>v;
    int sum=1;int sum1=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int b;
        cin>>b;
        if(b>0 && sum>0){
        sum1+=a;
        sum+=b;
        sum--;
    }
    else
    v.push_back(a);
    }
    int ans=sum1;
    sort(v.begin(),v.end(),greater <int>());
    for(int i=0;i<min(sum,n);i++){
        ans+=v[i];
    }
    cout<<ans<<endl;
}