#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%2==1 && b%2==1 || a==1 || b==1)
        cout<<"No"<<endl;
        else 
        cout<<"Yes"<<endl;
    }
}