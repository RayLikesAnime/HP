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
        int c=0,d=0;
        for(int i=0;i<n;i++){
            if(s[i]>=48 && s[i]<=57)
            v.push_back(s[i]-48);
            else{
                if(s[i]=='+'){
                    c++;
                }
                else if(s[i]=='-')
                d++;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size()-c-d;i++)
        cout<<v[i];
        for(int i=v.size()-c-d;i<v.size();i++){
            if(c>0){
            cout<<"+";
            c--;}
            else if(c==0 && d>0){
            cout<<"-";
            d--;}
            cout<<v[i];
        }
        cout<<endl;
    
    }
}