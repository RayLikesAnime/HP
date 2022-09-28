#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c=0,d=0,e=0,sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            sum1+=(arr[i]/x);
            if(arr[i]%x!=0)
            sum1++;
        }
        sum2=(sum/x);
        if(sum%x!=0)
        sum2=(sum/x)+1;
        cout<<sum2<<" "<<sum1<<endl;
    

    }
}