#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);
    long long ti = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        while (v[i] > 1) {
            ti++;
            v[i] /= 2;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ti + i << " ";
    }
    cout << endl;
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
