#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n,m;
    cin>>n>>m;
    int a=n/m;
    int b=n%m;
    int min=((n-m)*(n-m+1))/2;
    int max=((m-b)*(a*(a-1))/2)+((b)*((a+1)*(a))/2);
    if(m==1)
    cout<<(n*(n-1))/2<<" "<<(n*(n-1))/2<<endl;
    else
    cout<<max<<" "<<min<<endl;
    
}