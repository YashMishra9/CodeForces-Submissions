#include <bits/stdc++.h>
using namespace std;
 
string  AP(long long a,long long b,long long c){
    bool answer=false;
    long long new_a=2*b-c;
    if(new_a/a>0 && new_a%a==0){
        return "YES";
    }
    long long new_b=(a+c)/2;
    if(new_b/b>0 && new_b%b==0 && (c-a)%2==0){
            return "YES";
    }
 
    long long new_c=2*b-a;
    if(new_c/c>0 && new_c%c==0){
        return "YES";
    }
    return "NO";
}
            
            
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<AP(a,b,c)<<endl;
    }
    return 0;
}