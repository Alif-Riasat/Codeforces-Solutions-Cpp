#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b=a;
        sort(a.begin(),a.end());
        if(a!=b){
            cout<<0<<endl;
        }
        else{
            int minDiff=INT_MAX;
            for(int i=1;i<n;i++){
                minDiff=min(minDiff,a[i]-a[i-1]);
            }
            cout<<(minDiff/2)+1<<endl;
        }
    }
}