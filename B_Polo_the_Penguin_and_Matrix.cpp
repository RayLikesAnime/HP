#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int n,m,d;
    cin>>n>>m>>d;
    vector<int> v;
    for(int i=0;i<n*m;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int flag=0;
    for(int i=0;i<v.size()-1;i++){
        if((v[i+1]-v[i])%d!=0)
        flag=1;
    }
    int ans=INT_MAX;
    if(flag==1)
    cout<<-1<<endl;
    else{
        int sum=0; 
        for(int i=0;i<v.size();i++){
            sum=0;
            for(int j=0;j<v.size();j++){
                sum+=((abs(v[j]-v[i]))/d);
            }
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
    }
}