#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if( (n==a && n==b) || n-(a+b)>1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}