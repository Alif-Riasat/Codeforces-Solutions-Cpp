#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long con_odd=0,con_even=0;
        for(int i=0;i<n;i++){
            if(i+1<n){
                if(a[i]%2==1 && a[i+1]%2==1){
                con_odd++;
            }
            else if(a[i]%2==0 && a[i+1]%2==0){
                con_even++;
            }
            else{
                continue;
            }
            }
            
        }
        long long result=(con_odd)+(con_even);
        cout<<result<<endl;
    }
}