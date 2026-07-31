#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[105][105];
    int rows[3],col[3];
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='*'){
                rows[k]=i;
                col[k]=j;
                k++;
            }
        }
    }
    int r1=rows[0];int r2=rows[1];int r3=rows[2];
    int c1=col[0];int c2=col[1];int c3=col[2];
 
    int missingRow,missingCol;
 
    if(r1==r2){
        missingRow=r3;
    }
    else if(r2==r3){
        missingRow=r1;
    }
    else{
        missingRow=r2;
    }
 
 
    if(c1==c2){
        missingCol=c3;
    }
    else if(c2==c3){
        missingCol=c1;
    }
    else{
        missingCol=c2;
    }
 
    cout<<missingRow<<" "<<missingCol;
 
    return 0;
}