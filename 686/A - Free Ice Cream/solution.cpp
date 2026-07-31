#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    long long d;
    string s;
    int distressed=0;
    long long total=x;
    while(n--){
        cin>>s>>d;
        if(s[0]=='+'){
            total+=d;
        }
        else if(s[0]=='-' && total-d>=0){
            total-=d;
        }
        else if(total-d<0){
            total=total;
            distressed+=1;
        }
 
 
    }
    cout<<total<<" "<<distressed<<endl;
    return 0;
}