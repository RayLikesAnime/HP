#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++){
        if((s[i]-48)%2==0)
        c++;

    } int flag=0; int d=0;
    if(c==0)
    cout<<-1<<endl;
    else if(c>=1){
        for(int i=0;i<s.length();i++){
            if((s[i]-48)%2==0){
                d=i;
                if(s[i]<s[s.length()-1]){
                    swap(s[i],s[s.length()-1]);
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        cout<<s<<endl;
        else{
            swap(s[d],s[s.length()-1]);
            cout<<s<<endl;
        }
        
    }
}