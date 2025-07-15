#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long modexp(long long a, long long p) {
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

vector<long long> factorial, inv_factorial;
void compute_factorials() {
    int N = 1e6;
    factorial.resize(N + 1);
    inv_factorial.resize(N + 1);
    factorial[0] = 1;
    inv_factorial[0] = 1;

    for (long long i = 1; i <= N; i++) {
        factorial[i] = (factorial[i - 1] * i) % mod;
        inv_factorial[i] = modexp(factorial[i], mod - 2);
    }
}

vector<long long> dearr;
void compute_derangements() {
    int N = 1e6;
    dearr.resize(N + 1);
    dearr[0] = dearr[1] = 0;

    for (int i = 2; i <= N; i++) {
        if (i % 2 == 0) {
            dearr[i] = (dearr[i - 1] + inv_factorial[i]) % mod;
        } else {
            dearr[i] = (dearr[i - 1] - inv_factorial[i] + mod) % mod;
        }
    }
}

void solve() {
    int n;
    cin >> n;

    long long ans = (1 - dearr[n] + mod) % mod;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    compute_factorials();
    compute_derangements();

    while (t--) {
        solve();
    }
    return 0;
}
