#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0)
        cout<<"YES"<<endl;
        else if(n>=(2*k)+1){
            int flag=0;
            for(int i=0;i<k;i++){
                if(s[i]!=s[s.length()-1-i]){
                flag=1; break;
            }}
            if(flag==1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    
    }
}