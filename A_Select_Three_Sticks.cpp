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
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        vector<int>v;
        for(int i=0;i<n-1;i++){
            v.push_back(arr[i+1]-arr[i]);
        }
        int sum=0;int ans=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            sum=v[i]+v[i+1];
            ans=min(sum,ans);
        }
        cout<<ans<<endl;
    }
}