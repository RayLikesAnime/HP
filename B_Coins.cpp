#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    while (n!= 1)
    {
        cout<<n<<" ";
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }
    cout<<n;
}   