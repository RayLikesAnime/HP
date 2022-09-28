#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if(x==0 && y==0)
        cout<<-1<<endl;
        else if(x!=0 && y!=0)
        cout<<-1<<endl;
        else if(x==0 && y!=0){
            if((n-1)%y==0){
                for(int i=1;i<=n;i+=y){
                    for(int j=0;j<y;j++){
                        cout<<i<<" ";
                    }
                    if(i==1)
                    i++;
                }
                cout<<endl;
            }
            else
            cout<<-1<<endl;
        }
        else{
            if((n-1)%x==0){
                for(int i=1;i<=n;i+=x){
                    for(int j=0;j<x;j++){
                        cout<<i<<" ";
                    }
                    if(i==1)
                    i++;
                }
                cout<<endl;
            }
            else
            cout<<-1<<endl;

        }
        
    }
}