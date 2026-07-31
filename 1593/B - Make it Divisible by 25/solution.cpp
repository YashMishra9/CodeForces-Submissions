#include <bits/stdc++.h>
using namespace std;
 
int min_operations(string s, string possible_value){
    int operations=0;
    int check_index=possible_value.size()-1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==possible_value[check_index]){
            check_index--;
            if(check_index<0){
                break;
            }
        }
        else{
            operations++;
        }
    }
    if(check_index>=0){
        operations=INT_MAX;
    }
    return operations;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<string>possible_values={"00","25","75","50"};
        int ans=INT_MAX;
        for(auto possible_value:possible_values){
            ans=min(ans,min_operations(n,possible_value));
        }
        cout<<ans<<endl;
    }
 
    return 0;
}