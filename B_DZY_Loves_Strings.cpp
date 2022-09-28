#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int arr[26];
    for(int i=0;i<26;i++)
    cin>>arr[i];
    int max=arr[0];
    for(int i=1;i<26;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int sum=0;
    for(int i=1;i<=s.length();i++){
        sum+=arr[(s[i-1]-97)]*i;
    }
    for(int i=1+s.length();i<=s.length()+k;i++)
    sum+=(max*i);
    cout<<sum<<endl;
}