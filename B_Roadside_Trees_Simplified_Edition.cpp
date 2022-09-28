#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int sum=arr[0];
    for(int i=1;i<t;i++){
        sum+=((abs(arr[i]-arr[i-1]))+2);

    }
    cout<<sum+1<<endl;
}