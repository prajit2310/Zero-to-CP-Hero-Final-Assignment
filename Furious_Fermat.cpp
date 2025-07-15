#include <bits/stdc++.h>
using namespace std;

long long modexp(long long a, long long p, long long mod) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        p = p / 2;
    }
    return res;
}

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long mod = 1e9 + 7;

    long long x = modexp(b, c, mod - 1);
    long long y = modexp(a, x, mod);

    cout << y << endl;
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
