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
        int n1=n;
        int c=0,d=0;
        while(n%2==0){
            c++;
            n=n/2;
        }
        while(n%3==0){
            d++;
            n=n/3;
        }
        if(d>=c && n==1)
        cout<<(d-c)+d<<endl;
        else
        cout<<-1<<endl;
    }
}