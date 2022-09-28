#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
        float a,b,c,d;
        cin>>a>>b>>c>>d;
        float a1=a/b;
        float a2=c/d;
        float ans=a1/(1-((1-a1)*(1-a2)));
        cout<<fixed<<setprecision(12);
        cout<<ans<<endl;
}