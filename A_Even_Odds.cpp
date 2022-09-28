#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
}