#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    vector<int> v1; int sum1=0;
    vector<int> v2; int sum2=0;
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        if(a>0){
        v1.push_back(a); sum1+=a;}
        else{
        v2.push_back(-a); sum2-=a;}
    }
    int b;
    cin>>b;
    int last=b;
    if(b>0){
        v1.push_back(b); sum1+=b;}
        else{
        v2.push_back(-b); sum2-=b;}
        if(sum1>sum2)
        cout<<"first"<<endl;
        else if(sum2>sum1)
        cout<<"second"<<endl;
        else{
            int flag=0;
            for(int i=0;i<min(v2.size(),v1.size());i++){
                if(v1[i]>v2[i]){
                    cout<<"first"<<endl;
                    flag=1;
                    break;
                }
                if((v1[i]<v2[i])){
                    cout<<"second"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                if(v1.size()>v2.size())
                cout<<"first"<<endl;
                else if(v1.size()<v2.size())
                cout<<"second"<<endl;
                else{
                    if(b>0)
                    cout<<"first"<<endl;
                    else
                    cout<<"second"<<endl;
                }
            }
        }}