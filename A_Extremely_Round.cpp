#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first_digit=(s[0]-'0');
        int total_digits=s.size();
        int result;
        result=(total_digits-1)*9+first_digit;
        cout<<result<<endl;
    }
}