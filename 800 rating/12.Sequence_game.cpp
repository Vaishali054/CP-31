#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        vector<int>ans;

        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(ans.size()>0 && arr[i]<ans.back() ){
                ans.push_back(arr[i]);
            }
            ans.push_back(arr[i]);
            
        }

        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();++i){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}