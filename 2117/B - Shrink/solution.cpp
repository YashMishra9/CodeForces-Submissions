#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        cout << 1 << ' ';
 
        for (int x = n; x >= 2; --x) {
            cout << x << (x == 2 ? '
' : ' ');
        }
    }
 
    return 0;
}