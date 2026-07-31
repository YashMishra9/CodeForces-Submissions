#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int faces=0;
    for(int i=0;i<n;i++){
        if(arr[i]=="Tetrahedron"){
            faces+=4;
        }
        else if(arr[i]=="Cube"){
            faces+=6;
        }
        else if(arr[i]=="Octahedron"){
            faces+=8;
        }
        else if(arr[i]=="Dodecahedron"){
            faces+=12;
        }
        else if(arr[i]=="Icosahedron"){
            faces+=20;
        }
    }
    cout<<faces;
 
    return 0;
}