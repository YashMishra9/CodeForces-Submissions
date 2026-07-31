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
        vector<string>s(n);
        vector<int>sizes(n);
        for(int i=0;i<n;i++){
            cin>>sizes[i]>>s[i];
        }
        for(int i=0;i<n;i++){
            int move=0;
            for(char c:s[i]){
                if(c=='D'){
                    move++;
                }
                else move--;
            }
 
            arr[i]=((arr[i]+move)%10+10)%10;
        }
 
       
        for(auto &it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}