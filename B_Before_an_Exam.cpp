#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int d,sum;
    cin>>d>>sum;
    int arr[2*d];
    for(int i=0;i<2*d;i++)
    cin>>arr[i];
    int minsum=0,maxsum=0;
    for(int i=0;i<2*d;i+=2){
        minsum+=arr[i];
        maxsum+=arr[i+1];
    }if(sum>=minsum && sum<=maxsum){
        cout<<"YES"<<endl;
        int a=minsum;
        int c=0;
        int j=1;
        for(int i=0;i<2*d;i+=2){
           int diff=arr[i+1]-arr[i];
           while(j<=diff){
            if(a==sum){
                break;
            }
            a++;
            arr[i]++;
            j++;
           }


        }
        for(int i=0;i<2*d;i+=2){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else
    cout<<"NO"<<endl;

}