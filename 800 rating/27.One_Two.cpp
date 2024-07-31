#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>prefix(n);
        vector<int>suffix(n);
        vector<int>arr(n);

        int cnt=0;

        for(int i=0;i<n;++i){
            cin>>arr[i];
        }

        for(int i=0;i<n;++i){
            if(arr[i]==2) ++cnt;
            prefix[i]=cnt;
        }

        cnt=0;
        suffix[n-1]=0;

        for(int i=n-1;i>=0;--i){
            suffix[i]=cnt;
            if(arr[i]==2) ++cnt;
        }

        int ans=INT_MAX;

        for(int i=0;i<n;++i){
            if(prefix[i]==suffix[i]){
                ans=i+1;
                break;
            }
        }

        if(ans==INT_MAX){
            cout<<-1<<endl;
        }
        else cout<<ans<<endl;
    }

    return 0;
}