#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>d(27,0);
        for(int i=0;i<n/2;i++){
            int left=min(s[i],s[n-i-1])-'a';
            int right=max(s[i],s[n-i-1])-'a';
            if(left<right){
                d[left+1]++;
                d[right+1]--;
            }
        }
        int res=0;
        int sum=0;
        for(int i=0;i<26;i++){
            sum+=d[i];
            if(sum>0){
                res++;
            }
        }
        cout<<res<<endl;
 
 
       
   }
    return 0;
}