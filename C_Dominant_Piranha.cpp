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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxe=*max_element (arr, arr+n); int c=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==maxe){
                if(i==0){
                    if(arr[i+1]!=maxe)
                    c=i;
                }
                else if(i==n-1){
                    if(arr[n-2]!=maxe)
                    c=i;
                }
                else{
                    if(arr[i-1]!=maxe || arr[i+1]!=maxe)
                    c=i;
                }
            }
        }
        if(c==-1)
        cout<<-1<<endl;
        else
        cout<<c+1<<endl;
    }
}