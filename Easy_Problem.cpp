#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, k;
    cin >> x >> k;

    cout << (1LL * (x - 1) * k) + 1LL << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
