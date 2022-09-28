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
        string s;
        cin>>s;
        vector<int> v; int num=0;
        for(int i=0;i<n;i++){
            if((s[i+2]=='0' && s[i+3]!='0') && (i<n-2)){
                int a=(int)(s[i])-48;
                int b=(int)(s[i+1])-48;
                int c=(10*a)+b;
                v.push_back(c);
                i+=2;
            }
            else{
                num=(((int)s[i]-48));
                v.push_back(num);
            }
        }
        for(int i=0;i<v.size();i++){
            char a=static_cast<char>(v[i]+96);
            cout<<a;

        }
        cout<<endl;
    }
}