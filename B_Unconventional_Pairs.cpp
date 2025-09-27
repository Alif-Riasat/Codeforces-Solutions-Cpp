#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int op;
        vector<int>check(n);
        for(int i=0,j=0;i<n && j<n;i+=2,j++){
            if(a[i]>=a[i+1]){
                op=a[i]-a[i+1];
            }
            else{
                op=a[i+1]-a[i];
            }
            check[j]=op;
        }
        sort(check.begin(),check.end());
        int result=check[check.size()-1];
        cout<<result<<endl;
    }
}