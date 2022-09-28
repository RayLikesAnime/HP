#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
void bubbleSort(vector<int>& v11,vector<int>& v2)
{
    int i, j;
    for (i = 0; i < v11.size() - 1; i++){
        for (j = 0; j < v11.size() - i - 1; j++){
            if (v11[j] > v11[j + 1])
                swap(v11[j], v11[j + 1]);
                if(v11[j]==v11[j+1]){
                    if(v2[j]>v2[j+1])
                    swap(v11[j], v11[j + 1]);
                }}}
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
        sort(color1.begin(), color1.end());
        bubbleSort(v11,v2);
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