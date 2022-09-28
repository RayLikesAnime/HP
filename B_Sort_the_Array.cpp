#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        v1.push_back(a);
    }
    sort(v.begin(),v.end());
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(v[i]!=v1[i]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]!=v1[i]){
            r=i;
            break;
        }
    }
    if(l==-1){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else{
        int flag=0;
        for(int i=0;l+i<=r;i++){
            if(v1[r-i]!=v[l+i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"no"<<endl;
        else{
            cout<<"yes"<<endl;
            cout<<l+1<<" "<<r+1<<endl;
        }
    }
    
}