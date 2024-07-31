#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);

        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        sort(arr.rbegin(), arr.rend());

        bool possible=true;
        if(arr[0]==arr[1]){
            int i=2;
            while(i<n && arr[i]==arr[0]) ++i;
            if(i<n) swap(arr[1], arr[i]);
            else possible=false;
        }

        if(!possible ){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;

            for(auto it : arr){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}