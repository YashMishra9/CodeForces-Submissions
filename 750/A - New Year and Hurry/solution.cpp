#include <bits/stdc++.h>
using namespace std;
 
int time(int n,int k){
    int count=0;
    int time=0;
    for(int i=1;i<=n;i++){
        time+=5*i;
        if(time>240-k){
            break;  
        }
        count++;
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<time(n,k);
    return 0;   
}