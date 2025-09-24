#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count_0=0,count_1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count_0++;
            }
            else{
                count_1++;
            }
        }
        int t_size=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0' && count_1>0){
                count_1--;
                t_size++;
            }
            else if(s[i]=='1'&&count_0>0){
                count_0--;
                t_size++;
            }
            else{
                break;
            }
        }
        int result=s.size()-t_size;
        cout<<result<<endl;
        
    }
}