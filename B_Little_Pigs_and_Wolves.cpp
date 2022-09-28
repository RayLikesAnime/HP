#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,m;
    cin>>n>>m;
    char arr[n+2][m+2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    int c=0,d=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        if(arr[i][j]=='W'){
            if(arr[i-1][j]=='P' || arr[i+1][j]=='P' || arr[i][j+1]=='P' || arr[i][j-1]=='P')
            c++;
        }}
    }
    cout<<c<<endl;
}