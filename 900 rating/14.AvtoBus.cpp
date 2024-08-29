#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n%2!=0 || n==2){
            cout<<-1<<endl;
        }
        else{
            long long temp=n/2;

            long long min_6=temp/3;
            long long mini_6=min_6*3;
            long long rem_mini=temp-mini_6;
        
            if(rem_mini==1){
            
                rem_mini=2;
            }
            long long min_4=rem_mini/2;

            long long mini=min_6+min_4;

            long long max_4=temp/2;
            long long maxi_4=max_4*2;
            long long rem_maxi=temp-maxi_4;
            long long max_6=rem_maxi/3;

            long long maxi=max_4+max_6;

            cout<<mini<<" "<<maxi<<endl;

        }
    }
    return 0;
}