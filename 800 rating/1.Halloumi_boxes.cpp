// Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. 
// He stored them inside n boxes and each of which has some number ai written on it.

// He wants to sort them in non-decreasing order based on their number, however, his machine works in a 
// strange way. It can only reverse any subarray of boxes with length at most k

// Find if it's possible to sort the boxes using any number of reverses.

// Input

// Each test case consists of two lines.
// The first line of each test case contains two integers n
//  and k— the number of boxes and the length of the maximum reverse that Theofanis can make.

// 5
// 3 2
// 1 2 3
// 3 1
// 9 9 9
// 4 4
// 6 4 2 1
// 4 3
// 10 3 830 14
// 2 1
// 3 1

//Output
// YES
// YES
// YES
// YES
// NO
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; int k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }

        if(k==1 && !is_sorted(arr.begin(),arr.end())){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;

}

