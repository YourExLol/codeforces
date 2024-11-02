## Problem Statement ##
## A. Kefa and First Steps
## https://codeforces.com/problemset/problem/580/A

############################################### Code begins here ##############################################################

#include <bits/stdc++.h>
using namespace std;

template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& element : v) is >> element;
    return is;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v;

    int c_ans=1; // to hold current max
    int ans=1;   //too hold global max
    //suppose we have a non decreasing subsequence from i to i+k, now if the subsequence break at i+k+1 
    //then we can make i=i+k+1 since any i from i to i+k cant be starting point of subsequence.
    for(int i=0;i<n-1;i++){
        if(v[i+1]>=v[i]) {
            c_ans++;
            ans=max(ans,c_ans);
        }
        else c_ans=1;
    }//for loop ends here

    cout<<ans;
}

