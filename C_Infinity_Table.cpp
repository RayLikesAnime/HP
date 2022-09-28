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
        int c=0;
        for(int i=1;;i++){
            if(n<=(i*i)){
                c=i;
                break;
            }
        }
        int d=((c-1)*(c-1))+1;
        int mid=((c*c)+d)/2;
        if(n>=mid){
            for(int i=(c*c);i>=mid;i--){
                if(n==i)
                cout<<c<<" "<<(c*c)-i+1<<endl;
            }
        }
        else{
            for(int i=d;i<mid;i++){
                if(n==i)
                cout<<i+1-d<<" "<<c<<endl;
            }
        }

    }
}