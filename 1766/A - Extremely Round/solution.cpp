#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int digits = n.size();
        int firstDigit = n[0] - '0';
        cout << 9 * (digits - 1) + firstDigit << endl;
    }
    return 0;
}