#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        vector<char>arr;
        arr.push_back(s1[0]);
        arr.push_back(s2[0]);
        arr.push_back(s3[0]);
        for(auto &it:arr){
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}