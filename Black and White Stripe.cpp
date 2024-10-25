## Problem Statement ##
## Black and White Stripe
## https://codeforces.com/contest/1690/problem/D

############################################### Code begins here ##############################################################

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
    int z,k;
    cin>>z;
    cin>>k;
    string s;
    cin>>s;
    int curr=0;
    int ans=0;

    for(int i=0;i<k;i++){
        if(s[i]=='B') curr++;
    }
     ans=max(ans,curr);
    
    // Finding which strip of k block has max B using 2 pointers techniques
    for(int i=k;i<s.size();i++){
        if(s[i]=='B' && s[i-k]=='W') curr++;
        if(s[i]=='W' && s[i-k]=='B') curr--;
        ans=max(ans,curr);
    }
    if(ans>k) cout<<-1;
    else
    cout<<k-ans<<endl;
}}
