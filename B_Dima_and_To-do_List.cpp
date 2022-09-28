#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    int n, k;
    cin >> n >> k;
    vector<int>v;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int minsum = INT_MAX, sum, res = 1;
    sum = 0;
    for (int j = 0; j < k; ++j) {
        sum = 0;
        for (int i = j; i < n; i += k) {
            sum += v[i];
        }
        if (minsum > sum) {
            minsum = sum;
            res = j + 1;
        }
    }
    cout << res;
    return 0;
}