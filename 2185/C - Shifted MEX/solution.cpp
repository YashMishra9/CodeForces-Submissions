#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
 
        for(auto &it : arr){
            cin >> it;
        }
 
        sort(arr.begin(), arr.end());
        int longest=1,current=1;
 
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                continue;
            }
            else if(arr[i]==arr[i-1]+1){
                current+=1;
            }
            else{
                longest=max(longest,current);
                current=1;
            }
    }
 
        longest=max(longest, current);
 
        cout<<longest<<endl;
    }
 
    return 0;
}