#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        map<string,int>mp;
        vector<string>a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            mp[b[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
            mp[c[i]]++;
        }
        int s1=0,s2=0,s3=0;
        for(int i=0;i<n;i++){
            if(mp[a[i]]==1){
                s1+=3;
            }
            else if(mp[a[i]]==2){
                s1+=1;
            }
            if(mp[b[i]]==1){
                s2+=3;
            }
            else if(mp[b[i]]==2){
                s2+=1;
            }
            if(mp[c[i]]==1){
                s3+=3;
            }
            else if(mp[c[i]]==2){
                s3+=1;
            }
        }
        cout<<s1<<" "<<s2<<" "<<s3<<endl;
 
 
    }
    return 0;
}