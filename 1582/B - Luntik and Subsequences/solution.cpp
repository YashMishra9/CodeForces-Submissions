    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            vector<long long>arr(n);
            for(auto &it:arr){
                cin>>it;
            }
            long long cnt1=0,cnt0=0;
            for(int i=0;i<n;i++){
                if(arr[i]==1){
                    cnt1+=1;
                }
                if(arr[i]==0){
                    cnt0+=1;
                }
            }
            long long total=cnt1*pow(2,cnt0);
            cout<<total<<endl;
        }
 
        return 0;
    }