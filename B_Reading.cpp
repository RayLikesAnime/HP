#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n,k;
    cin>>n>>k;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int e=arr[k-1];
    cout<<e<<endl;
    int c=0;
    for(int i=0;i<=k-1;i++){
        if(arr[i]==e)
        c++;
    }
    for(int i=0;i<n;i++){
        if(arr1[i]>e)
        cout<<i+1<<" ";
        if(arr1[i]==e && c>0){
            cout<<i+1<<" ";
            c--;
        }
    }
}