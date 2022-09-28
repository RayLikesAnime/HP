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
        for(int i=0;i<n;i++){
            if(s[i]=='U')
            cout<<'D';
            else if(s[i]=='D')
            cout<<'U';
            else if(s[i]=='L')
            cout<<'L';
            else
            cout<<'R';
        }
        cout<<endl;
    }
}