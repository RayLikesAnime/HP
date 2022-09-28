#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<char> v;
        for(int i=0;i<b;i++){
            v.push_back((char)(97+i));

        }
        for(int i=0;i<n;i++){
            cout<<v[i%b];
        }
        cout<<endl;
    }
}