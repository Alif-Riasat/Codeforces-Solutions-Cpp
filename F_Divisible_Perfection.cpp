#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long sum=0;
        if(n>4){
            cout<<"NO"<<endl;
            continue;
        }
        int flag=1;
        for(int i=0;i<=n;i++){
            for(int j=i;j<n;j++){
                string p=s.substr(i,j-i+1);
                if(stoi(p)%(j-i+1)!=0){
                    flag=0;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}