#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long min_sum=(k*(k+1))/2;
        long long total_sum=(n*(n+1))/2;
        long long max_sum=(total_sum-((n-k)*(n-k+1))/2);
        if(min_sum<=x&&x<=max_sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}