#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long ans=0;

        for(int i=0;i<=60;i++){
            set<long long>distinctVals;

            long long k=1LL<<i;

            for(int ind=0;ind<n;ind++){
                distinctVals.insert(a[ind]%k);
            }

            if(distinctVals.size()==2){
                ans=k;
                break;
            }
        }
        cout<<ans<<endl;
    }
}