#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }

        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int a[n],b[n];
             for(int j=0;j<n;j++){
                a[j]=arr[j];
                b[j]=arr[j];
             }
            int p,k;
            cin>>p>>k;
            vector<int> v1;
            vector<int> v;
            for(int j=0;j<n;j++){
                if(a[j]%p==0){
                    v.push_back(a[j]);
                    v1.push_back(j);
                }
            }
            sort(v.begin(),v.end(),greater<int>());
            for(int j=0;j<v1.size();j++){
                b[v1[j]]=v[j];
            }
            int sum=0;
            for(int j=0;j<k;j++)
            sum+=b[j];
            cout<<sum<<endl;

        }
    }
}