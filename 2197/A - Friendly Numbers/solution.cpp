#include <bits/stdc++.h>
using namespace std;
int digitSum(long long n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        int cnt=0;
        for(long long i=x;i<=x+90;i++){
            if(i-digitSum(i)==x){
                cnt++;
            }
        }
        cout<<cnt<<endl;
 
    }
}