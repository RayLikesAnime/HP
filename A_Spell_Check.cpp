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
        sort(s.begin(),s.end());
        string s1="Timur";
        sort(s1.begin(),s1.end());
        if(s==s1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}