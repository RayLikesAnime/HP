#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main()
{
    int n, m, a, b;
    cin>>n>>m;
    bool fire[1001] = {false};
    while (m--)
    {
        cin>>a>>b;
        fire[a] = true;
        fire[b] = true;
    }
    int x = 1;
    while (fire[x])
    {
        x++;
    }
    cout<<n - 1<<endl;
    for (int i = 1; i < x; ++i)
    {
        cout<<i<<" "<<x<<endl;
    }
    for (int i = x + 1; i <= n; ++i)
    {
        cout<<x <<" "<<i<<endl;
    }
}