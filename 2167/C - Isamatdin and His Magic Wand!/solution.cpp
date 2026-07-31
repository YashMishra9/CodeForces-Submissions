#include <bits/stdc++.h>
using namespace std;
 
// int count(long long n,vector<long long>arr){
//     int cnt=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==n){
//             cnt++;
//         }
//     }
//     return cnt;
// }
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(auto &it:arr){
            cin>>it;
        }
 
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }
            else odd++;
        }
        if(even==n || odd==n){
            for(auto &it:arr){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else{
            sort(arr.begin(),arr.end());
            for(auto &it:arr){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}