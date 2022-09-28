#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
   int n,k;
   cin>>n>>k;
   int arr[n+1];
   for(int i=1;i<=n;i++)
   arr[i]=i;
   int len=n-k;
   if(len==0)
   cout<<-1<<endl;
   else{
    if(len%2==0){
        swap(arr[1],arr[k+2]);
        for(int i=k+3;i<=n;i+=2){
            swap(arr[i],arr[i+1]);
        }
    }
    else
    for(int i=k+2;i<=n;i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=1;i<=n;i++)
   cout<<arr[i]<<" ";
   }
}