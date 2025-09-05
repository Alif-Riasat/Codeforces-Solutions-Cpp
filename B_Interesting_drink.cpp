#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    sort(a.begin(),a.end());
    while(q--){
        long long int l=0,r=n-1;
        long long int search;
        cin>>search;
        int index=0;
        while(l<=r){
            long long int mid=(l+r)/2;
            if(a[mid]<=search){
                index=mid+1;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        
        if((search>=a[0])&&(search<=a[n-1])){
            cout<<index<<endl;
        }
        else if(search>a[n-1]){
            cout<<n<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}