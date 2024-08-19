#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int i=0;
        int maxi=INT_MIN;

        while(i<n){
            int start=i;

            while(i<n && s[i]=='<'){
                maxi=max(maxi, i-start+1);
                ++i;
            }

            start=i;

            while(i<n && s[i]=='>'){
                maxi=max(maxi,i-start+1);
                ++i;
            }
        }

        cout<<maxi+1<<endl;
    }

    return 0;
}