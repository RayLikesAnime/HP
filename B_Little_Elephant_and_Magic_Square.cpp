#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    vector<int> v;
    int sum=0;
    for(int i=0;i<9;i++){
        int a;
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    sum/=2;
    v[0]=sum-v[1]-v[2];
    v[4]=sum-v[3]-v[5];
    v[8]=sum-v[6]-v[7];
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    cout<<v[3]<<" "<<v[4]<<" "<<v[5]<<endl;
    cout<<v[6]<<" "<<v[7]<<" "<<v[8]<<endl;
}