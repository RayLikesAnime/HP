#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    bool prime[1000000 + 1]={true};
 
    for (int p = 2; p * p <= 1000000; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= 1000000; i += p)
                prime[i] = false;
        }
    }
    vector<int> v;
    for (int p = 2; p <= 1000000; p++)
        if (prime[p])
            v.push_back(p*p);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       if( binary_search(v.begin(), v.end(), arr[i]))
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
}