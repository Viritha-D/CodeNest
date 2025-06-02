#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, L, R;
        cin >> n >> L >> R;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int low = lower_bound(a.begin() + i + 1, a.end(), L - a[i]) - a.begin();
            int high = upper_bound(a.begin() + i + 1, a.end(), R - a[i]) - a.begin();
            ans += (high - low);
        }

        cout << ans << '\n';
    }

    return 0;
}
