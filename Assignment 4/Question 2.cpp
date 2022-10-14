#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,min,max,s=0,g=0;
    cin>>n;
    int A[n],i;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    min=A[0];
    max=A[0];
    for(i=1;i<n;i++){
        if(A[i]>max){
            s+=1;
            max=A[i];
        }
        else if(A[i]<min){
            g+=1;
            min=A[i];
        }
        else continue;
        }
        cout<<s<<" "<<g;
        return 0;
}
