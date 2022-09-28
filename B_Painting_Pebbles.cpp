#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int max=v[0];
    int min=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>max)
        max=v[i];
        if(v[i]<min)
        min=v[i];

    }
    if(k<(max-min))
    cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=1;j<=v[i];j++){
            if(j%k==0)
            cout<<k<<" ";
            else
            cout<<j%k<<" ";
            }
            cout<<endl;

        }
        cout<<endl;
        
    }
}