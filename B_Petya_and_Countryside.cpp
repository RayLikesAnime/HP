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
    int ans=0;
    int c;
    for(int i=0;i<n;i++){
        c=0; 
        for(int j=i-1;j>=0;j--){
            if(arr[j]<=arr[j+1])
            c++;
            else
            break;
        }
        for(int j=i;j<n;j++){
            if(arr[j+1]<=arr[j])
            c++;
            else
            break;
        }
        ans=max(c,ans);
    }
    cout<<ans+1<<endl;
}