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
        string s1=s;
        sort(s.begin(),s.end());
        char min=s[0];
        int ind;
        for(int i=0;i<s.length();i++){
            if(s1[i]==min)
            ind=i;
        }
        for(int i=0;i<ind;i++){
            if(s1[i]==min || s1[i]=='9')
            continue;
            else
            s1[i]=s1[i]+1;
        }
        sort(s1.begin(),s1.end());
        cout<<s1<<endl;
    }
}