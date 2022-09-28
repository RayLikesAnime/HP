#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,l;
    cin>>n>>l;
    vector<double> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    double diff=v[0];
    for(int i=1;i<n;i++){
        if(((v[i]-v[i-1])/2)>diff)
        diff=((v[i]-v[i-1])/2);

    }
    if(l-v[n-1]>diff)
    diff=l-v[n-1];
    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    std::cout << diff;
}