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
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            int q;
            cin>>q;
            for(int i=0;i<q;i++){
                int a;
                cin>>a;
                v[i].push_back(a);
            }
        }
        int arr[6]={0}; int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[1]=0;arr[2]=0;arr[3]=0;arr[4]=0;arr[5]=0;
                for(int k=0;k<v[i].size();k++){
                    arr[v[i][k]]++;
                }
                for(int k=0;k<v[j].size();k++){
                    arr[v[j][k]]++;
                }
                if(arr[1]>=1 && arr[2]>=1 && arr[3]>=1 && arr[4]>=1 && arr[5]>=1)
                flag=1;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}