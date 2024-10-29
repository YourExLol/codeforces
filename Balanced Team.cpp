## Problem Statement ##
## Balanced Team
## https://codeforces.com/contest/1133/problem/C

############################################### Code begins here ##############################################################

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    int j=0;
    cin>>n;
    vector<int> v(n);
    
    //storing values
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //sort to perform 2 pointer technique
    sort(v.begin(),v.end());

   //we will find max window for every i where v[j]-v[i]<=5
   //suppose we find a window for i to k, then for i+1, we dont need to start from start. we will look from after k+1;
    for(int i=0;i<n-ans;i++){
        while(j<n && v[j]-v[i]<=5)      
            j++;
        ans=max(ans,j-i);
    }
    
    cout<<ans;

}
