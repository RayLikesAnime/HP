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
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        sort(arr,arr+n);
        int c=0; int a1=-1; int maxe=0; int sum=0;
        for(int i=0;i<n;i++){
            while(arr[i]%2==0){
                c++;
                arr[i]=arr[i]/2;
            }
        maxe=max(maxe,arr[i]);
        sum+=arr[i];}
        cout<<sum+(maxe*((1ll<<c)-1))<<endl;
    }
}