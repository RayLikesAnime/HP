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
        vector<int>arr;
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<arr[i+n]<<" ";
        }
        cout<<endl;
    }
}