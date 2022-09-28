#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
   int n,m;
   cin>>n>>m;
   vector<int> v;
   for(int i=0;i<m;i++){
    int a;
    cin>>a;
    v.push_back(a);
   }
   int sum=v[0]-1;
   for(int i=1;i<m;i++){
    if(v[i]>=v[i-1])
    sum+=(v[i]-v[i-1]);
    else
    sum+=(n-(v[i-1]-v[i]));
    
   }
   cout<<sum<<endl;
}