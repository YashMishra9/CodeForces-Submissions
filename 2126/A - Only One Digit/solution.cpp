#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr={};
        while(n>0){
            int digit=n%10;
            arr.push_back(digit);
            n/=10;
        }
        int mini=*min_element(arr.begin(),arr.end());
        cout<<mini<<endl;
    }
    return 0;
}