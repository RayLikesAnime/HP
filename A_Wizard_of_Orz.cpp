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
        vector<int>v;
        if(n==1)
        cout<<9<<endl;
        else
        if(n==2)
        cout<<98<<endl;
        else{
        v.push_back(9);
        v.push_back(8);
        v.push_back(9);
        for(int i=0;i<(n-3);i++){
            v.push_back(i%10);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            

        }
        cout<<endl;}


        }


            
        }


    