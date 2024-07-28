#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int maxi=0;
        int cnt=0;

        for(int i=0;i<n;++i){
            int number;
            cin>>number;

            if(number==0){
                ++cnt;
                maxi=max(cnt,maxi);
            }
            else{
                cnt=0;
            }
        }

        cout<<maxi<<endl;
    }
    return 0;
}