#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n=10;
        int m=10;

        vector<vector<char>>arr(n, vector<char>(m));
        int score=0;

        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>arr[i][j];
                if(arr[i][j]=='X'){
                    if((i==0 || j==0 || i==9 || j==9)) ++score;
                    else if(i==1 || j==1 || i==8 || j==8) score+=2;
                    else if(i==2 || j==2 || i==7 || j==7) score+=3;
                    else if(i==3 || j==3 || i==6 || j==6) score+=4;
                    else score+=5;
                }
            }
        }

        cout<<score<<endl;
    }
    return 0;
}