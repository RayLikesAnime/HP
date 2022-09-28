#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(c==0 && s[i]=='h')
        c++;
        if(c==1 && s[i]=='e')
        c++;
        if((c==2||c==3) && s[i]=='l')
        c++;
        if(c==4 && s[i]=='o')
        c++;
    }
    if(c==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
