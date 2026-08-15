#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int &x : a)
        cin >> x;
 
    sort(a.rbegin(), a.rend());
 
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cout << -1 << '
';
            return;
        }
    }
 
    for (int x : a)
        cout << x << ' ';
 
    cout << '
';
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--)
        solve();
}