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
    int max=arr[0];int maxi=0;
    int min=arr[0];int mini=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
        maxi=i;
        max=arr[i];
        }
        if(arr[i]<=min){
        mini=i;
        min=arr[i];
        }
    }
    if(maxi>mini)
    cout<<(maxi+n-mini-1-1)<<endl;
    else
    cout<<(maxi+n-mini-1)<<endl;
}