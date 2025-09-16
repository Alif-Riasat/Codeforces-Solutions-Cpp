#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    set<int>a;

    for(int i=0;i<x;i++){
        int x;
        cin>>x;
        a.insert(x);
    }

    int y;
    cin>>y;
    set<int>b;

    for(int i=0;i<y;i++){
        int x;
        cin>>x;
        b.insert(x);
    }

    a.insert(b.begin(),b.end());
    if(a.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

}