#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> v;
    if(n==1)
    cout<<1<<endl;
    else if(n==2)
    cout<<2<<endl;
    else{
    for(int i=2;i<n;i++){
        if(arr[i]==(arr[i-1]+arr[i-2]))
        v.push_back(i);
    }
    int c=0;
    int ans=3;
    if(v.size()==0)
    cout<<2<<endl;
    else if(v.size()==1)
    cout<<3<<endl;
    else{
    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1]==1)
        c++;
        else
        c=0;
        ans=max(ans,c+3);




    }
    cout<<ans<<endl;
    }}
}