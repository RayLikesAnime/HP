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
        cin>>arr[i]; int c=0,d=0,e=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0)
            c++;
            else if(arr[i]==0)
            d++;
            else
            e++;
        }
        if(d!=0)
        cout<<0<<endl;
        else{
            if(e%2==0)
            cout<<0<<endl;
            else
            cout<<1<<endl;
        }
    }
}