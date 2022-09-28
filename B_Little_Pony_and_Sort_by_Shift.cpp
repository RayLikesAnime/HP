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
    int c=0,index=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            c++;
            index=i;
        }
    }
    if (arr[n - 1] > arr[0]) index = n - 1, c++;
    if(c>1)
    cout<<-1<<endl;
    else
    if(c==1)
    cout<<n-index-1<<endl;
    else
    cout<<0<<endl;
}






