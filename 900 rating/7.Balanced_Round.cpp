#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>arr(n);

        for(int i=0;i<n;++i) cin>>arr[i];

        sort(arr.begin(), arr.end());

        bool isValid=false;
        int mini=n-1;
        int start=0;

        for(int i=1;i<n;++i){
            int diff=abs(arr[i]-arr[i-1]);

            if(diff<=k && !isValid){
                start=i-1;
                isValid=true;
                int len=i-start+1;
                mini=min(mini, n-len);
            }
            else if(diff<=k && isValid){
                int len=i-start+1;
                mini=min(mini, n-len);
            }
            else{
                isValid=false;
            }
        }

        if(n==1) cout<<0<<endl;
        else if(n==2 && !isValid) cout<<1<<endl;
        else cout<<mini<<endl;
    }
    return 0;
}