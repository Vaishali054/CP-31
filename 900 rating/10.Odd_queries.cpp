#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<int>arr(n);

        for(int i=0;i<n;++i) cin>>arr[i];

        vector<int>prefix(n+1);
        prefix[0]=0;

        for(int i=1;i<n+1;++i){
            prefix[i]=prefix[i-1]+arr[i-1];
        }

        vector<vector<int>>queries(q, vector<int>(3));

        for(int i=0;i<q;++i){
            cin>>queries[i][0];
            cin>>queries[i][1];
            cin>>queries[i][2];
        }


        int total=accumulate(arr.begin(), arr.end(),0);
        for(auto it : queries){
            int sum=total;
            int start=it[0];
            int end=it[1];
            int remove=prefix[end]-prefix[start-1];
            sum-=remove;
            sum+=((end-start+1)*it[2]);
            if(sum%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}