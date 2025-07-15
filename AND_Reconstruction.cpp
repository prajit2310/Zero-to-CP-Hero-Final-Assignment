#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<long long> B(n + 1, 0);
    for (int i = 0; i < n; i++) {
        B[i] |= A[i];
        B[i + 1] |= A[i];
    }

    for (int i = 0; i < n; i++) {
        if ((B[i] & B[i + 1]) != A[i]) {
            cout << "-1" << endl;
            return;
        }
    }

    for (int i = 0; i <= n; i++) {
        cout << B[i] << " ";
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
