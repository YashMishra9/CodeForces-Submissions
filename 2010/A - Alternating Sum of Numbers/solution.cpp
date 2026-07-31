#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        int EvenSum=0;
        int OddSum=0;
        for(int i=0;i<n;i+=2){
            EvenSum+=arr[i];
        }
        for(int i=1;i<n;i+=2){
            OddSum+=arr[i];
        }
        cout<<EvenSum-OddSum<<endl;
    }
 
    return 0;
}