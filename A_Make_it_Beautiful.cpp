#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<j-n-1;i++){
                if(a[j+1]<a[j]){
                    swap(a[j+1],a[j]);
                }
            }
        }
        if(a[0]==a[n-1]){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" ";
            for(int i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
}