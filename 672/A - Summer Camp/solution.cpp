#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>temp;
    for(int i=1;i<4000;i++){
        vector<int>digits;
        int x=i;
        while(x!=0){
            int rem=x%10;
            digits.push_back(rem);
            x/=10;
        }
    
    reverse(digits.begin(),digits.end());
    for(int d:digits){
        temp.push_back(d);
    }
    }
    cout<<temp[n-1];
    return 0;
}