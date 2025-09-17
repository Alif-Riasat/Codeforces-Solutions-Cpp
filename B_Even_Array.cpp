#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int wrongEven=0,wrongOdd=0;
        for(int i=0;i<n;i++){
            if(i%2!=a[i]%2){
                if(i%2==0){
                    wrongEven++;
                }
                else{
                    wrongOdd++;
                }
            }
        }
        if(wrongEven!=wrongOdd){
            cout<<-1<<endl;
        }
        else{
            cout<<wrongEven<<endl;
        }
    }
}