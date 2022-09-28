#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int arr[n];
        int freq[101]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int sum=0;
        for(int i=0;i<100;i++){
            sum+=min((freq[i+1]),c);
        }
        cout<<sum<<endl;
    }
}