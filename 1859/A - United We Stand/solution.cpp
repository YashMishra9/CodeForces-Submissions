#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            long long n;
            cin>>n;
            vector<long long>arr(n);
            for(auto &it:arr){
                cin>>it;
            }
            long long mx = *max_element(arr.begin(),arr.end());
            vector<long long>b,c;
            for(int i=0;i<n;i++){
                if(arr[i]!=mx){
                    b.push_back(arr[i]);
                }
                else{
                    c.push_back(arr[i]);
                }
            }
            if(b.size()==0){
                cout<<-1<<endl;
            }
            else{
                cout<<b.size()<<" "<<c.size()<<endl;
                for(auto it:b){
                    cout<<it<<" ";
                }
                cout<<endl;
                for(auto it:c){
                    cout<<it<<" ";
                }
                cout<<endl;
            }
 
 
    }
 
    return 0;
}