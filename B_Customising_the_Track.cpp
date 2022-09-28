#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e7+9;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int a=sum%n;
        cout<<a*(n-a)<<endl;
    }
}