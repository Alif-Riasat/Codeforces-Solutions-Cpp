#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,p;
    cin>>n>>p;
    
    long long odd_count=(n+1)/2;
    if(odd_count>=p){
        cout<<2*p-1<<endl;
    }
    else{
        cout<<2*(p-odd_count);
    }
}