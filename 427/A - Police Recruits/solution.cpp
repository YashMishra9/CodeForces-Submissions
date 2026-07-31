#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int available=0;
    int untreated=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            if(available>0){
                available--;
            }
            else{
                untreated++;
            }
        }
        else{
            available+=arr[i];
        }
    }
    cout<<untreated;
 
    return 0;
}