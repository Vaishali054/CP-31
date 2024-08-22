#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans=0;

        for(int i=0;i<n;++i){
            int number;
            cin>>number;
            int diff=abs(i+1-number);
            ans=__gcd(diff,ans);
        }

        cout<<ans<<endl;
    }
    return 0;
}