#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        if(x%2==0){
            if(n%4==0)
            cout<<x<<endl;
            if(n%4==1)
            cout<<x-n<<endl;
            if(n%4==2)
            cout<<x+1<<endl;
            if(n%4==3)
            cout<<x+1+n<<endl;
        }
        else{
            if(n%4==0)
            cout<<x<<endl;
            if(n%4==1)
            cout<<x+n<<endl;
            if(n%4==2)
            cout<<x-1<<endl;
            if(n%4==3)
            cout<<x-1-n<<endl;
        }

    }
}