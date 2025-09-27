#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        if(mp[-1]%2==0){
            cout<<mp[0]<<endl;
        }
        else{
            int op=(mp[-1]%2)*2+mp[0];
            cout<<op<<endl;
        }
    }
}