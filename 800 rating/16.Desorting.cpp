#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int mini=INT_MAX;
        vector<int>nums(n);

        for(int i=0;i<n;++i){
            cin>>nums[i];
            if(i>0) mini=min(mini,nums[i]-nums[i-1]);
        }

        if(mini<0){
            cout<<0<<endl;
        }
        else{
            cout<<(mini/2 +1)<<endl;
        }
    }
    return 0;
}