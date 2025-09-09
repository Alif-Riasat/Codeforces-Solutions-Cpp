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

        map<long long, long long> frequence_map;
        for(int i=0;i<n;i++){
            frequence_map[a[i]]++;
        }
        // For each element a[i], use it as a key in the map.
        // If the key is not present, it is inserted with default value 0.
        // Then the value (frequency counter) is incremented.
        // Result: map stores each distinct element as key, and its count as value.

        if(frequence_map.size()>=3){
            cout<<"No"<<endl;
        }
        else{

            long long freq_1=frequence_map.begin()->second;
            long long freq_2=frequence_map.rbegin()->second;
            // ->second gives the value part of the key-value pair, which is the frequency
            // freq_1 = frequency of the smallest key in the map
            // freq_2 = frequency of the largest key in the map


            if(freq_1==freq_2){
                cout<<"Yes"<<endl;
            }
            else if(n%2==1 && abs(freq_1-freq_2)==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        }
    }
}