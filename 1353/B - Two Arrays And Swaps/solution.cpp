#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n),b(n);
        for(auto &it:a){
            cin>>it;
        }
        for(auto &it:b){
            cin>>it;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=n-1;
        while(k--){
            if(a[i]<b[j]){
            swap(a[i],b[j]);
            i++;j--;
            }
            else continue;
        }
        long long sum=0;
        for(auto &it:a){
            sum+=it;
        }
        cout<<sum<<endl;
    }
    return 0;
}