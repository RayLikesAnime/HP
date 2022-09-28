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
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            v.push_back(i+1);
        }
        sort(v.begin(),v.end());
        int ans=0;int c;int d;
        for(int i=0;v.size()!=0;){
            c=1;d=v[0];
            for(int j=0;v.size()!=0;j++){
                if(v[j]%d==0 && v[j]/d==c){
                ans+=d;
                c++;
                v.erase(v.begin()+j);
                }
            }
            i=0;
        }
        cout<<ans<<endl;

    }
}