    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        string s1,s2;
        cin>>s1;
        cin>>s2;
       
        int start=0;
        int end=s1.size()-1;
        while(start<=end){
                char temp=s1[end];
                s1[end]=s1[start];
                s1[start]=temp;
                start++;
                end--;
            }
        
        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
 
 
        return 0;
    }