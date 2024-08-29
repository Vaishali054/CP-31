#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);

        for(int i=0;i<n;++i) cin>>arr[i];

        int l=0;
        int r=n-1;

        while(l<n && arr[l]==0) ++l;
        while(r>=0 && arr[r]==0) --r;

        if(l>r){
            cout<<0<<endl;
        }
        else{
            bool midzeros=false;
            while(l<=r){
                if(arr[l]==0){
                    midzeros=true;
                    break;
                }
                ++l;
            }

            if(midzeros) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
    return 0;
}