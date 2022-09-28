#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    int size=10004/4;
    string s;
    for(int i=0;i<n;i++){
        if(i%4==0)
        cout<<'a';
        if(i%4==1)
        cout<<'b';
        if(i%4==2)
        cout<<'c';
        if(i%4==3)
        cout<<'d';
    }
}