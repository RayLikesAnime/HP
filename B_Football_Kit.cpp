#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(a);
        v.push_back(b);
    }
    int arr1[100001]={0};
    int arr2[100001]={0};
    arr1[0]=-1;
    arr2[0]=-1;
    for(int i=0;i<2*n;i++){
        if(i%2==0)
        arr1[v[i]]++;
        else
        arr2[v[i]]++;
    }
    for(int i=1;i<2*n;i+=2){
        cout<<n-1+arr1[v[i]]<<" "<<n-1-arr1[v[i]]<<endl;
    }

}