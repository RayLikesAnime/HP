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
        int max=arr[0],index=0;
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                index=i;
            }
        }
        cout<<index+1<<endl;
    }
}