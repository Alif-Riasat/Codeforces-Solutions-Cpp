#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int y;
        cin>>y;
        if(y<2020){
            cout<<"NO"<<endl;
        }
        else if(y%2020==0 || y%2021==0){
            cout<<"YES"<<endl;
        }
        else{
            int flag=0;
            while(y>=2020){
            y-=2021;
            if(y%2020==0){
                flag=1;
                break;
            }
            }
            if(flag==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}