#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double d=sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
    cout<<ceil(d/(2*r))<<endl;
}