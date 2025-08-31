#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        int flag=0;
        if(a==b){
            if(c%2==1){
                flag=1;
            }
            else{
                flag=0;
            }
        }
        else if(a>b){
            flag=1;
        }
        else{
            flag=0;
        }
        if(flag==1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}