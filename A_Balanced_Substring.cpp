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
        int c=0,flag=0;
        if(n==1)
        cout<<-1<<" "<<-1<<endl;
        else{
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                flag=1;
                c=i;
                break;
            }
        }
        if(flag==1)
        cout<<c+1<<" "<<c+2<<endl;
        else
        cout<<-1<<" "<<-1<<endl;
    }}
}