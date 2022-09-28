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
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum==0)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            sort(arr,arr+n);
            if(sum<0){
                for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
                cout<<endl;
            }
            else{for(int i=n-1;i>=0;i--)
                cout<<arr[i]<<" ";
                cout<<endl;

            }


        
            }
        }

    }
