#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        long long sum=0;
        if(b>1) sum+=b-1;

        for(int i=0;i<n;++i){
            int tool;
            cin>>tool;
            sum+=min(tool,a-1);
        }

        cout<<sum+1<<endl;
    }
}