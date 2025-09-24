#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,k,flag=0;
        cin>>x>>k;
        if(x==1 && k==2){
            cout<<"YES"<<endl;
            continue;
        }
        if(k>=2){
            cout<<"NO"<<endl;
            continue;
        }
        if(x==1){
            cout<<"NO"<<endl;
            continue;
        }
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}