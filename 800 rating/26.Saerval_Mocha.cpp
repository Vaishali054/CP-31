#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);

        for(int i=0;i<n;++i){
            cin>>nums[i];
        }
        bool possible=false;


        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                if(__gcd(nums[i], nums[j])<=2){
                    possible=true;
                    break;
                }

            }
        }

        if(possible){
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
    }

    return 0;
}