#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);

        for(int i=0;i<n;++i){
            cin>>arr[i];
        }

        unordered_map<int,int>mp;

        for(int i=0;i<n;++i){
            mp[arr[i]]++;
        }

        if(mp.size()>2){
            cout<<"no"<<endl;
        }
        else{
            bool possible=true;
            for(auto it : mp){
                if(it.second<n/2){
                    possible=false;
                }
            }
            if(possible){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}