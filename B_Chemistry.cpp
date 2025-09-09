#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,long long>freq;
        for(auto c: s){
            freq[c]++;
        }

        long long odd_freq=0;
        for(auto it:freq){
            if(it.second%2==1){
                odd_freq++;
            }
        }

        if(odd_freq>k+1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}