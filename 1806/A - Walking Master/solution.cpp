#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int initialX,initialY,finalX,finalY;
        cin>>initialX>>initialY>>finalX>>finalY;
        if(finalY<initialY){
            cout<<-1<<endl;
            continue;
        }
        int moves=finalY-initialY;
        initialX+=moves;
 
        if(finalX>initialX){
            cout<<-1<<endl;
            continue; 
        }
        moves+=(initialX-finalX);
        cout<<moves<<endl;
 
    }
 
    return 0;
}