## Problem Statement ##
## Sereja and Dima
## https://codeforces.com/contest/381/problem/A

############################################### Code begins here ##############################################################

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //Storing cards nos
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    
    //declaring required variables
    int s=0,d=0; //sum of sereja and dima
    bool flag=true; //if true sereja false dima turn
    int start=0,end=n-1;

    while(start<=end){
        if(arr[start]>arr[end]){
            if(flag==true) s+=arr[start];
            else d+=arr[start];
            start++;
            flag=!flag; //to switch turns
        }
        else {
            if(flag==true) s+=arr[end];
            else d+=arr[end];
            end--;
            flag=!flag;  //to switch turns
        }
    }// while loop ends here

    cout<<s<<" "<<d;
}
