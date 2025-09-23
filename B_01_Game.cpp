#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long count_zero=0,count_one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count_zero++;
            }
            else{
                count_one++;
            }
        }
        if(min(count_zero,count_one)%2==1){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
}