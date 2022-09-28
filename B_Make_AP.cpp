#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(2*b>a+c){
            if(((2*b)-a)%c==0)
            cout<<"YES"<<endl;
            else if(((2*b)-c)%a==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            }
        else if(2*b<a+c){
            if(((a+c)%(2*b))==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }
        else 
        cout<<"YES"<<endl;    
        }
        
    }
