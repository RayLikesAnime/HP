#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k=1;
    while(t--)
    {
        int n;string temp;
        cin>>n;
        string s[n];int b[n];int c[n];
        string s1[n];int b1[n];int c1[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>b[i]>>c[i];
            s1[i]=s[i];
            b1[i]=b[i];
            c1[i]=c[i];
        }
        int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (b[j] > b[j + 1])
                swap(b[j], b[j + 1]);
                if(b[j]==b[j+1]){
                    if(c[j]>c[j+1]){
                        swap(b[j], b[j + 1]);
                    }
                }}}
                for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (s[j] > s[j + 1])
                swap(s[j], s[j + 1]);
                if(s[j]==s[j+1]){
                    if(c[j]>c[j+1]){
                        swap(s[j], s[j + 1]);
                    }
                }}}
        int f=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                if(s[i]==s1[j] && b[i]==b1[j])
            f++;
        }}
        cout<<"Case #"<<k<<": "<<f<<endl;
        k++;
    }
}