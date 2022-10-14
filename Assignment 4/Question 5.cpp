#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int k,s=0,A[n];
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>0;j--){
            s=A[i]+A[j];
            if(s%k==0){
                if(i<j){
                count++;}
            }
        }
    }
    cout<<count;
    return 0;
}
