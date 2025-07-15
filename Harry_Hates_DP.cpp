#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

void solve() {
    int m, n;
    cin >> m >> n;

    vector<long long> s(m + 1), l(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> s[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> l[i];
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
    dp[0][1] = 1;

    for (int day = 0; day < n; day++) {
        for (int from = 1; from <= m; from++) {
            for (int to = 1; to <= m; to++) {

                long long ways = (s[from] * s[to] + s[from] * l[to] + l[from] * s[to]) % mod;
                dp[day + 1][to] = (dp[day + 1][to] + (dp[day][from] * ways) % mod) % mod;

            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= m; i++) {
        ans = (ans + dp[n][i]) % mod;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
