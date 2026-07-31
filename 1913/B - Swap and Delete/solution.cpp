#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int count1=0,count0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0+=1;
            }
            else if(s[i]=='1'){
                count1+=1;
            }
        }
        int length_of_t=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && count1>0){
                count1--;
                length_of_t++;
            }
            else if(s[i]=='1' && count0>0){
                count0--;
                length_of_t++;
            }
            else break;
        }
        cout<<n-length_of_t<<endl;
    }
    return 0;
}