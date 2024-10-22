## Problem Statement ##
## Satyam and Counting
## https://codeforces.com/contest/2009/problem/D

## Code begins here #####################################################################################

#include<bits/stdc++.h>
using namespace std;

int main(){
    //Test Cases
    int t;
    cin>>t;
    while(t--){
    //array size
    int n;
    cin>>n;
    long long ans=0;
        
    // to store cordinates
    //storing cordinates in set, since we can search quickly.
    set<pair<int,int>> s;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        s.insert({x,y});
    }

    for(auto [x,y]:s){
        //when traingle one side is parallel to Y-axis
        //triangle_count=no of pairs with x-cordinate same * (size_of_array-2)
        //since (x,0) and(x,1) both will be iterated so to prevent double counting we will consider y=0
        if(y==0 && s.count({x,1})) ans+=n-2;
        // triangle not parallel to Y-axis 
        //using constraints provided and a,b,c are x vertices of right tiangle 
        //the pythogorean property resulted in the following conditions
        // (c-b)(b-a)=1 and a,b,c are integers that means a,b,c are 1 unit apart
        //x cordinate for such traingle are (x,0)(x+1,1)(x+2,0) and switching y cordinate to get upside down triangle
        if(y==0 && s.count({x+1,1}) && s.count({x+2,0})) ans+=1;
        if(y==1 && s.count({x+1,0}) && s.count({x+2,1})) ans+=1;
    } // for loop ends here
    
         cout<<ans<<endl;
    } //while loop ends here


}
