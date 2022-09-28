#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=2*n;i+=2){
        if(k>0){
        cout<<i<<" "<<i+1<<" ";
        k--;
        }
        else
        cout<<i+1<<" "<<i<<" ";
    }
}