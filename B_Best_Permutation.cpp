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
        if(n%2==1){
            cout<<1<<" "<<2<<" "<<3<<" ";
            for(int i=4;i<=(n/2)+1;i++){
                int diff=(n-5)/2;
                cout<<i+diff<<" "<<i<<" ";
            }
            cout<<n-1<<" "<<n<<endl;
        }else{
            for(int i=n/2;i<n-1;i++){
                int diff=(n/2)-1;
                cout<<i<<" "<<i-diff<<" ";
            }
            cout<<n-1<<" "<<n<<endl;
        }
    }
}