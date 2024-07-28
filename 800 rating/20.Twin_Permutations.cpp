#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int>nums(n);

        for(int i=0;i<n;++i) cin>>nums[i];

        int i=0;
        while(i<n-1 && nums[i]==i+1){
            cout<<i+1<<" ";
            ++i;
        }        

        int total=n+(i+1);

        while(i<n){
            cout<<total-nums[i]<<" ";
            ++i;
        }
        cout<<endl;
        
    }
    return 0;
}