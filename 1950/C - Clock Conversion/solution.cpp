#include <bits/stdc++.h>
using namespace std;
 
void convert(string s){
    int h1=(int)s[0]-'0';
    int h2=(int)s[1]-'0';
    int hh=h1*10+h2;
 
    string period;
    if(hh<12){
        period="AM";
    }
    else{
        period="PM";
    }
 
    hh=hh%12;
    if(hh==0){
        cout<<"12";
        for(int i=2;i<s.length();i++){
            cout<<s[i];
        }
        cout<<" "<<period<<endl;
    }
    else{
        if(hh<10){
            cout<<0;
            cout<<hh;
            for(int i=2;i<s.length();i++){
                cout<<s[i];
            }
            cout<<" "<<period<<endl;
        }
        else{
            
            cout<<hh;
            for(int i=2;i<s.length();i++){
                cout<<s[i];
            }
            cout<<" "<<period<<endl;
        
        }
    }
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        convert(s);
        
 
    }
    return 0;
}