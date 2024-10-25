## Problem Statement ##
## Robin Helps
## https://codeforces.com/contest/2014/problem/A

############################################### Code begins here ##############################################################

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int r=0;
        int n,k,ans=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=k){
                r=r+arr[i];
            }
            else if(arr[i]==0 and r>0) {r--;ans++;}
        }
        cout<<ans<<endl;
    }
}
