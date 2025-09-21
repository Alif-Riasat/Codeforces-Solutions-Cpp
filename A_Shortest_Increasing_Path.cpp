#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(y>x){
            cout<<2<<endl;
        }
        else if(x-1>y && y>1){
            cout<<3<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}