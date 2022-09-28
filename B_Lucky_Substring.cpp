#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    string s;
    cin>>s;
    int c=0,d=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4')
        c++;
        if(s[i]=='7')
        d++;
    }
    if(c==0 && d==0)
    cout<<-1<<endl;
    else if(c>=d)
    cout<<4<<endl;
    else
    cout<<7<<endl;
}