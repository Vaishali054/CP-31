#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&a){
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;++i){
            cin>>a[i];
        }

        sort(a.begin(), a.end());
        bool possible=true;
        vector<int>b;
        vector<int>c;
        b.push_back(a[0]);

        for(int i=1;i<n;++i){
            if(a[i]>b.back()){
                c.push_back(a[i]);
            }
            else{
                b.push_back(a[i]);
            }
        }

        if(b.size()==0 || c.size()==0){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            print(b);
            print(c);
        }
    }

    return 0;
}