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
        if(n<=9)
        cout<<n<<endl;
        else if(n>=10 && n<=17)
        cout<<9+(n-9)*10<<endl;
        else if(n>=18 && n<=24)
        cout<<9+(8*10)+((n-17)*100)<<endl;
        else if(n>=25 && n<=30)
        cout<<9+(8*10)+(7*100)+((n-24)*1000)<<endl;
        else if(n>=31 && n<=35)
        cout<<9+(8*10)+(7*100)+(6*1000)+((n-30)*10000)<<endl;
        else if(n>=36 && n<=39)
        cout<<9+(8*10)+(7*100)+(6*1000)+(5*10000)+((n-35)*100000)<<endl;
        else if(n>=40 && n<=42)
        cout<<9+(8*10)+(7*100)+(6*1000)+(5*10000)+(4*100000)+((n-39)*1000000)<<endl;
        else if(n>=43 && n<=44)
        cout<<9+(8*10)+(7*100)+(6*1000)+(5*10000)+(4*100000)+(3*1000000)+((n-42)*10000000)<<endl;
        else if(n>=45 && n<=45)
        cout<<9+(8*10)+(7*100)+(6*1000)+(5*10000)+(4*100000)+(3*1000000)+(2*10000000)+((n-44)*100000000)<<endl;
        else
        cout<<-1<<endl;


    }
}