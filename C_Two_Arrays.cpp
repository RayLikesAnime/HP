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
        int a[n];int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int flag=0;
        int diff;
        for(int i=0;i<n;i++){
           diff=b[i]-a[i];
           if(diff==0)
           continue;
           else
           if(diff==1)
           continue;
           else
           {
            flag=1;
            break;
           }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}