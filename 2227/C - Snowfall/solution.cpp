#include <bits/stdc++.h>
using namespace std;
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
        vector<long long>div3,div2,div6,others;
        for(int i=0;i<n;i++){
            if(arr[i]%6==0){
                div6.push_back(arr[i]);
            }
            else if(arr[i]%2==0){
                div2.push_back(arr[i]);
            }
            else if(arr[i]%3==0){
                div3.push_back(arr[i]);
            }
            else others.push_back(arr[i]);
        }
        
        vector<long long>finals;
        for(int x:div2){
            finals.push_back(x);
        }
        for(int x:others){
            finals.push_back(x);
        }
        for(int x:div3){
            finals.push_back(x);
        }
        for(int x:div6){
            finals.push_back(x);
        }
 
        for(int x:finals){
            cout<<x<<" ";
        }
 
        cout<<endl;
 
    }
    return 0;
}