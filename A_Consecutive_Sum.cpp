#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        vector<int> v1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int sum=0;
        for(int i=0;i<k;i++){
            int max=v[i];
            for(int j=i;j<n;j+=k){
                if(v[j]>max)
                max=v[j];

            }
            sum+=max;
        }
        cout<<sum<<endl;


    }
}