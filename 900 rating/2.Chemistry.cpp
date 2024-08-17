#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int len=((n-k)/2)*2;

        string s;
        cin>>s;

        unordered_map<char,int>mp;
        bool possible=false;

        for(int i=0;i<n;++i)  mp[s[i]]++;

        for(auto it : mp){
            if(len>=it.second ){
                len-=(it.second/2)*2;
                if(len==0){
                    possible=true;
                    break;
                }
            }
            else {
                possible=true;
            }
        }

        

        if(len<=1 || possible) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}