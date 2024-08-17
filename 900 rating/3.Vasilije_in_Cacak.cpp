#include<bits/stdc++.h>
using namespace std;

bool sum_possible(long long i,long long n, long long k, long long x, long long sum, long long cnt){
    if(i==n+1){
        if(sum==x && k==cnt){
            return true;
        }
        return false;
    }

    if(sum==x && k==cnt){
        return true;
    }
    if(sum>x || cnt>k){
        return false;
    }

    bool take=sum_possible(i+1,n,k,x,sum+i,cnt+1);
    bool not_take=sum_possible(i+1,n,k,x,sum,cnt);

    return take || not_take;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;


        long long mini=(k*(k+1))/2;
        long long maxi= (n*(n+1))/2 - ((n-k) * (n-k+1))/2;
        
        if(mini<=x && maxi>=x){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}