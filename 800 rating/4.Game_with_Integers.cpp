#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int mod=n%3;

        if(mod==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
        
    }

    return 0;
}