#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>arr={};
        for(char c:s){
            arr.push_back(c-'a'+'0');
        }
        int maxi=*max_element(arr.begin(),arr.end());
        cout<<maxi-47<<endl;   
    }
    return 0;
}