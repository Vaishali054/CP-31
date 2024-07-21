#include<bits/stdc++.h>
using namespace std;

bool issub(string x, string s) {
    int n = x.size();
    int m = s.size();
    for (int i = 0; i <= n - m; ++i) {
        if (x.substr(i,m) == s) {
            return true;
        }
    }
    return false;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n1;
        int n2;
        cin>>n1>>n2;

        string x;
        string m;
        cin>>x>>m;

        int cnt=0;

        while(!issub(x,m)){
            if(cnt>max(n1,n2)){
                cnt=-1;
                break;
            }
            ++cnt;
            x+=x;
        } 

        cout<<cnt<<endl;

    }
    return 0;
}