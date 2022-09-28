#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    v.push_back(a);
    v.push_back(b);
}
int sum=0;
for(int i=0;i<2*n;i+=2){
   sum+=v[i];
   if(sum<=500)
   cout<<"A";
   else{
    sum=sum-1000;
    cout<<"G";
   }
   
}cout<<endl;
}