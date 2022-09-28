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
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==n-1){
                    if(j==0 || j==n-1)
                    cout<<1<<" ";
                    else
                    cout<<0<<" ";
                }
                else{
                    if(j==i || j==i+1)
                    cout<<1<<" ";
                    else
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }
}