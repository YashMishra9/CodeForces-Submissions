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
 
        int steps=0;
        int positives=0;
        int negatives=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                positives+=1;
            }
            else{
                negatives+=1;
            }
        }
        int operations=0;
        while(negatives>positives || negatives%2==1){
            operations++;
            positives++;
            negatives--;
        }
        cout<<operations<<endl;
 
    }
 
    return 0;
}