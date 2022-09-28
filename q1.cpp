#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
bool my_compare(string a, string b)
{
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
    else
        return a < b;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> color1;
        vector<int> v11;
        vector<string> color2;
        vector<int> v12;
        vector<int> v2;
        for(int i=0;i<n;i++){
            string s;int a,b;
            cin>>s>>a>>b;
            color1.push_back(s);
            v11.push_back(a);
            v2.push_back(b);
            color2.push_back(s);
            v12.push_back(a);
            v2.push_back(b);

        }
        int c=0;
        sort(color1.begin(), color1.end(), my_compare);
        sort(v11.begin(),v11.end());
        for(int i=0;i<n;i++){
            for(int j=0;i<n;i++){
                if(color1[i]==color2[j]){
                    if(v11[i]==v12[j]){
                        c++;
                        break;
                    }
                }

            }
        }
        cout<<c<<endl;

    }
}