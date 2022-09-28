#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int a=arr[0];
        for(int i=1;i<n;i++)
        a&=arr[i];
        cout<<a<<endl;
    }
}