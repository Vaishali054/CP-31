#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int digit=0;
        int temp=n;

        while(temp>0){
            digit++;
            temp/=10;
        }

        int cnt=n/pow(10,digit-1);
        --digit;
        while(digit){
            cnt+=9;
            --digit;
        }

        cout<<cnt<<endl;
    }
    return 0;
}