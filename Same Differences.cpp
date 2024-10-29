## Problem Statement ##
## Same Differences
## https://codeforces.com/contest/1520/problem/D

############################################### Code begins here ##############################################################

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=0;
        unordered_map<int,long long> um;

      //a[j]-a[i]=j-i => a[j]-j=a[i]-i; j>i
        for(int i=0;i<n;i++) {
            int temp;
            cin>>temp;
            if(um.count(temp-i)) um[temp-i]++;
            else
            um.insert({temp-i,1});
        }
        
        for(auto e:um){
             ans+=((e.second*e.second)-e.second)/2;
        }
        
        cout<<ans<<endl;

}//while loop ends here
  
}
