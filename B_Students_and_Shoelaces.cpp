#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<2*m;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int arr[101]={0};
    for(int i=0;i<v.size();i++){
        arr[v[i]]++;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        int c=0;
        for(int j=1;j<=100;j++){
            if(arr[j]==1){
                c++;
                for(int k=0;k<v.size();k++){
                    if(v[k]==j){
                        if(k%2==0)
                        v.erase(v.begin()+k,v.begin()+k+1);
                        else
                        v.erase(v.begin()+k-1,v.begin()+k);
                    }
                }
            }
        }
        for(int l=0;l<v.size();l++){
        arr[v[l]]++;
    }
        if(c==0)
        break;
        else
        ans++;
    }
    cout<<ans<<endl;
}