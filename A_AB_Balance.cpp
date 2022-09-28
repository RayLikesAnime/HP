#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]==s[s.length()-1])
        cout<<s<<endl;
        else{
            s[0]=s[s.length()-1];
            cout<<s<<endl;
        }
    }
}