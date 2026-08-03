#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>cnt;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            int ones=0;
            for(char c:s){
                 if(c=='1'){
                    ones++;
                }
            }
            if(ones>0){
                cnt.push_back(ones);
            }
        }
        bool square=true;
        for(int i=1;i<cnt.size();i++) {
            if(cnt[i]!=cnt[0]){
                square=false;
                break;
            }
        }
 
        cout<<(square?"SQUARE":"TRIANGLE")<<'
';
    }
 
    return 0;
}