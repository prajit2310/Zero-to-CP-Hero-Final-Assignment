#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int ind = -1;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        if (v[i] == x) {
            ind = i;
            break;
        }
    }

    int ans = 0;
    int lo = 1, hi = n;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (mid == ind) break;
        if (mid < ind) {
            if (v[mid] > x) ans++;
            lo = mid + 1;
        } else {
            if (v[mid] < x) ans++;
            hi = mid - 1;
        }
    }

    cout << ans << endl;
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
