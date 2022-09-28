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
        string a[n];
        string b[n];
        string c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        int a1=0,a2=0,sum1=0;
        for(int i=0;i<n;i++){
            a1=0;a2=0;
            for(int j=0;j<n;j++){
            if(a[i]==b[j]){
            a1=1;
            }
            if(a[i]==c[j]){
            a2=1;
            }

        }
        if(a1==1 && a2==0)
        sum1+=1;
        if(a2==1 && a1==0)
        sum1+=1;
        if(a1==0 && a2==0)
        sum1+=3;

        
    }
    a1=0;a2=0; int sum2=0;
        for(int i=0;i<n;i++){
            a1=0;
            a2=0;
            for(int j=0;j<n;j++){
            if(b[i]==a[j]){
            a1=1;
            }
            if(b[i]==c[j]){
            a2=1;
            }

        }
        if(a1==1 && a2==0)
        sum2+=1;
        if(a2==1 && a1==0)
        sum2+=1;
        if(a1==0 && a2==0)
        sum2+=3;

        
    }
    a1=0;a2=0;int sum3=0;
        for(int i=0;i<n;i++){
            a1=0;a2=0;
            for(int j=0;j<n;j++){
            if(c[i]==b[j]){
            a1=1;
            }
            if(c[i]==a[j]){
            a2=1;
            }

        }
        if(a1==1 && a2==0)
        sum3+=1;
        if(a2==1 && a1==0)
        sum3+=1;
        if(a1==0 && a2==0)
        sum3+=3;

        
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;

}}