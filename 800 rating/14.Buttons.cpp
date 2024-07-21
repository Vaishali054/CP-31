#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&a){
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long Ana;
        long long Katie;
        int c;
        cin>>Ana>>Katie>>c;

        if(c%2){
            --Katie;
        }

        if(Katie>=Ana) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }

    return 0;
}