#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b>d) cout<<-1<<endl;
        else{
            int cnt=0;
            cnt+=(d-b);
            a+=cnt;
            if(c>a) cout<<-1<<endl;
            else{
                cnt+=a-c;
                cout<<cnt<<endl;
            }
        }
    }

    return 0;
}