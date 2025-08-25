#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        int result=0;
        for(int i=0;i<n-1;i++){
            result+=a[i];
        }
        cout<<-1*result<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=0;
    int sum=0;
    int height=0;
    for(int i=1;;i++){
        k=(i*(i+1))/2;
        sum+=k;
        if(sum<=n){
            height++;
        }
        else{
            break;
        }
    }
    cout<<height;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int flag=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i=0;i<n;i++){
            if(a[i]==k){
                flag=1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}