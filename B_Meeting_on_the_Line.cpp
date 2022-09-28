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
       float a[n],b[n];
       float sum=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
       } 
       sort(a,a+n);
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       if(n%2==1)
       cout<<a[(n/2)]<<endl;
       else
       cout<<(a[((n-1)/2)]+a[(n/2)])/2<<endl;
        

    }
}