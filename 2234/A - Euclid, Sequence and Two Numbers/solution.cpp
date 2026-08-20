#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        bool ok=true;
        sort(arr.rbegin(),arr.rend());
        long long first=arr[0];
        long long second=arr[1];
        for(int i=2;i<n;i++){
            long long rem=first%second;
            if(rem!=arr[i]){
                ok=false;
                break;
            }
            first=second;
            second=rem;
        }
        
        if(ok)cout<<arr[0]<<" "<<arr[1]<<endl;
        else cout<<-1<<endl;
 
 
    }
}