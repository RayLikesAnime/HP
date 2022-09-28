#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int arr[18];
        int i=0;
        int n;
        cin>>n;
        int r;
        while(n!=0){
        r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
        }
        int length=i;
        int a=-1,b=-1,c=-1,d=-1;
        vector<int> v;
        vector<int> ans;
        for(int j=length;j>=0;j--){
            if(arr[j]==0){
            v.push_back(j);
            }
            if(arr[j]==5)
            b=j;
            if(arr[j]==2)
            c=j;
            if(arr[j]==7)
            d=j;
            }
            if(v.size()>=2)
            ans.push_back(v[0]-v[1]);
            if(b!=-1 && c!=-1)
            ans.push_back(b-c);
            if(v.size()>=1 && b!=-1)
            ans.push_back(v[0]-b);
            if(b!=-1 && c!=-1)
            ans.push_back(b-d);
            if()
        }
    }
