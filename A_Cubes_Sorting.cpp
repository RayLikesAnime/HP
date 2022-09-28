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
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(v[i+1]>=v[i]){
            flag=1;
            break;
        }}
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}