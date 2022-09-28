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
        vector<int>v;
        for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);}
        int c=0;
        int maxi=*max_element(v.begin(), v.end());
        int maxe=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]==maxi)
            break;
            if(v[i]>maxe){
                maxe=v[i];
                c++;
            }
        }
        cout<<c<<endl;
    }
}