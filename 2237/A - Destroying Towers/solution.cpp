#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mn = INT_MAX;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mn = min(mn, x);
            ans += mn;
        }
        cout << ans << '
';
    }
    return 0;
}