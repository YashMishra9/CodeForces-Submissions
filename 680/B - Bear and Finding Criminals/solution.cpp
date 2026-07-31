#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,n;
    cin>>n>>a;
    vector<long long>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int cnt=0;
    a=a-1;
    for(int i=0;i<n;i++){
        long long left=a-i;
        long long right=a+i;
        if(left<0 && right>=n){
            break;
        }
        if(left>=0 && right<n){
            if(arr[left]==1 && arr[right]==1){
                cnt+=(left==right?1:2);
            }
        }
        else if(left>=0){
                if(arr[left]==1){
                    cnt++;
                }
            }
        else if(right<n){
                if(arr[right]==1){
                    cnt++;
                }
            
        }
    }
    cout<<cnt;
 
    return 0;
}