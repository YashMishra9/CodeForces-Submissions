#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;
 
        long long flips = m / k;
        long long time = m % k;
 
        long long ans;
 
        if (k >= s){
            ans = max(0LL, s - time);
        }
        else {
           
            if (flips % 2 == 0) {
                
                ans = s - time;
            }
            else {
             
                ans = k - time;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}