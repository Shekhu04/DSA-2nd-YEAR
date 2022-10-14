#include <bits/stdc++.h>

using namespace std;
int main(){
    int s,t;
    int a,b;
    int m,n;
    int d;
    int A=0,k=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apple[m],orange[n];
    for(int i=0;i<m;i++){
        cin>>apple[i];

    }
    for(int j=0;j<n;j++){
        cin>>orange[j];
    }
    for(int i=0;i<m;i++){
        d=a+apple[i];
        if(d>=s && d<=t){
            A++;
        }     
    }
    for(int j=0;j<m;j++){
        d=b+orange[j];
        if(d>=s && d<=t){
            k++;
        }
    }
    cout<<A<<endl;
    cout<<k;
    return 0;
}
