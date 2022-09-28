#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    int a[26]={0};
    int b[26]={0};
    for(int i=0;i<s.length();i++){
        a[s[i]-97]++;
    }
    for(int i=0;i<s1.length();i++){
        b[s1[i]-97]++;
    }
    int sum=0;
    for(int i=0;i<26;i++){
        if(b[i])
	{
		if(a[i])
	sum+=min(a[i],b[i]);
		else{
			sum=0;
			break;
		}
	}
    }
    if(sum>0)
    cout<<sum<<endl;
    else
    cout<<-1<<endl;

}