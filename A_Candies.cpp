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
        long long ans;
        for(long long i=2;i<40;i++){
            ans=pow(2,i)-1;
            if(n%ans!=0)
            continue;
            else{
            n=n/ans;
            break;}
        }
        cout<<n<<endl;
    }
}