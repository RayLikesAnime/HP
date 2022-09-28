#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int j=0;j<s.length()-1;j++){
            if(s[j]=='B' && s[j+1]=='G'){
            swap(s[j],s[j+1]);
            j++;
        }}
    }
    cout<<s<<endl;
}