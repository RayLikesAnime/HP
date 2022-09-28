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
        if(is_sorted(arr, arr + n))
        cout<<0<<endl;
        else if((1==arr[0] && n!=arr[n-1]))
        cout<<1<<endl;
        else if((1!=arr[0] && n==arr[n-1]))
        cout<<1<<endl;
        else if((1==arr[0] && n==arr[n-1]))
        cout<<1<<endl;
        else if(1==arr[n-1] && n==arr[0])
        cout<<3<<endl;
        else
        cout<<2<<endl;
    }
}