#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int pos=0;
        int neg=0;

        for(int i=0;i<n;++i){
            int number;
            cin>>number;
            if(number>0)++pos;
            else ++neg;
        }

        if(neg==0 || (pos>=neg && neg%2==0)) cout<<0<<endl;
        else if(pos>=neg && neg%2==1) cout<<1<<endl;
        else{
            int cnt=0;
            while(!(neg%2==0 && pos>=neg)){
                --neg;
                ++pos;
                ++cnt;
            }
            cout<<cnt<<endl;
        } 
    }
    return 0;
}