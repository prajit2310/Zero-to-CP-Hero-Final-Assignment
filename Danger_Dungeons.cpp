#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        v[i] /= 2;
    }

    vector<long long> pref(n, 0);
    pref[0] = v[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }

    if (n == 1) {
        cout << 2LL * v[0] << endl;
        return;
    }

    if (pref[n - 2] >= v[n - 1]) {
        cout << pref[n - 1] << endl;
    } else {
        cout << 2LL * v[n - 1] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
