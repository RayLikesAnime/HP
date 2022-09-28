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
        int c=0,d=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')
            c++;
            else
            d++;
        }
        if(min(c,d)%2==0)
        cout<<"NET"<<endl;
        else
        cout<<"DA"<<endl;
    }
}