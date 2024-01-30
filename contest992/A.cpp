#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int ans = (m / 2) * n;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
