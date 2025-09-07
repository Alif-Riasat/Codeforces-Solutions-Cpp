#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        while(k--){
            if(x%2==0||x%2==1){
                x=x*2;
            }
            else{
                x=(x-1)/3;
            }
        }
        cout<<x<<endl;
    }
}