#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        arr[i]=arr[i-1]+(s[i-1]-96);
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<endl;
    }

}