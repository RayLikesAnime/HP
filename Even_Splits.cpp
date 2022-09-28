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
       string s;
       cin>>s;
       int c=0,d=0;
       for(int i=0;i<n;i++){
        if(s[i]=='0')
        c++;
        else
        d++;
       }
       if(c==0 || n==2)
       cout<<s<<endl;
       else{
        for(int i=0;i<c;i++)
        cout<<0;
        for(int i=0;i<d;i++)
        cout<<1;
        cout<<endl;
       }
    }
}