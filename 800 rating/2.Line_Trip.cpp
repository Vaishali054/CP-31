#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int>arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }

        int maxi=INT_MIN;
        int last=0;
        for(int i=0;i<n;++i){
            int curr=arr[i]-last;
            maxi=max(maxi, curr);
            last=arr[i];
        }
        

        maxi=max(2*(x-last),maxi);

        cout<<maxi<<endl;
    }
        return 0;
    
}