#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=n%2020;
        int b=n/2020;
        if(a<=b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}