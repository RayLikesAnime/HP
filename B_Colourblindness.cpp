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
        string s1,s2;
        cin>>s1>>s2;
        int flag=1;
        for(int i=0;i<n;i++){
            if((s1[i]=='R' && s2[i]!='R') || (s2[i]=='R' && s1[i]!='R'))
            flag=0;
        }
        if(flag==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}