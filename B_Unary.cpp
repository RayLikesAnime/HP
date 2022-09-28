#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define int long long int
int mod=1000003;
int32_t main(){
    string s;
    cin>>s;
    int a=0;
    for(int i=0;i<s.length();i++){
        a*=16;
        if(s[i]=='>')
        a=a+8;
        if(s[i]=='<')
        a=a+9;
        if(s[i]=='+')
        a=a+10;
        if(s[i]=='-')
        a=a+11;
        if(s[i]=='.')
        a=a+12;
        if(s[i]==',')
        a=a+13;
        if(s[i]=='[')
        a=a+14;
        if(s[i]==']')
        a=a+15;
        a=a%mod;
    }
    cout<<a%mod<<endl;

}