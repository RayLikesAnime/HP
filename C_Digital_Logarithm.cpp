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
        vector<int> v;
        for(int i=0;i<2*n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int arr[100000000];
        for(int i=0;i<2*n;i++){
            arr[v[i]]++;
        }
        for(int i=0;i<100000000;i++){
            if(arr[i]==1)
            v.push_

        }
        
        
    }
}