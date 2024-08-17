#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;

        vector<pair<int,int>>directions={{a,b},{a,-b},{-a,-b},{-a,b},
                                        {b,a},{-b,a},{b,-a},{-b,-a}};

        set<pair<int,int>>s1,s2;

        for(auto it : directions){
            int x1=xk+it.first;
            int x2=xq+it.first;
            int y1=yk+it.second;
            int y2=yq+it.second;

            s1.insert({x1,y1});
            s2.insert({x2,y2});

        }
        int cnt=0;
        for(auto it : s1){
            if(s2.find(it)!=s2.end()) ++cnt;
        }

        cout<<cnt<<endl;
    }

    return 0;
}