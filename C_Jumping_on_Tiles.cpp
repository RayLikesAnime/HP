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
       int start=(int)s[0];
       int end=(int)s[s.length()-1];
       int maxi=max(start,end);
       int mini=min(start,end);
       int cost=abs(end-start);
       vector<int> v;
       for(int i=1;i<s.length()-1;i++){
        int alp=(int)s[i];
        if(alp>=mini && alp<=maxi){
            v.push_back(alp-);

        }

       }
       sort(v.begin(),v.end());
       if(maxi==start){
        cout<<cost<<" "<<v.size()+2<<endl;
        cout<<start-48<<" ";
        for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";
        cout<<end-48<<endl;

       }
       else{
        cout<<cost<<" "<<v.size()+2<<endl;
        cout<<start-48<<" ";
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<end-48<<endl;


       }


    }
}