#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int ans=0;
        int cnt=0;

        for(int i=0;i<n;++i){
            char ch=s[i];
            if(ch=='#'){
                cnt=0;
                continue;
            }
            else{
                ++cnt;
                if(cnt<3){
                    ++ans;
                }
                else if(cnt==3){
                    ans=2;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}