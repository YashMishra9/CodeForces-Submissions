#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int size;
    cin >> size;
 
    string s;
    cin >> s;
 
    if (s.size() != size) {
        cout << "NO";
        return 0;
    }
 
    int sum1 = 0, sum2 = 0;
 
    for (int i = 0; i < size; i++) {
        if (s[i] != '4' && s[i] != '7') {
            cout << "NO";
            return 0;
        }
    }
 
    for (int i = 0; i < size / 2; i++)
        sum1 += s[i] - '0';
 
    for (int i = size / 2; i < size; i++)
        sum2 += s[i] - '0';
 
    cout << (sum1 == sum2 ? "YES" : "NO");
    return 0;
}