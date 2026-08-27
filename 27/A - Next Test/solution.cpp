#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<int> s;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
 
    int ans = 1;
 
    while (s.count(ans)) {
        ans++;
    }
 
    cout << ans;
 
    return 0;
}