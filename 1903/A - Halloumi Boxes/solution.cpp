    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        for(int i=0;i<t;i++){
            int n,k;
            cin>>n>>k;
            vector<int>arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            if(k>1){
                cout<<"YES"<<endl;
            }
            else{
                bool ok=true;
                for(int i=1;i<n;i++){
                    if(arr[i-1]>arr[i]){
                        ok=false;
                    }
                }
                if(ok){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
 
        return 0;
    }