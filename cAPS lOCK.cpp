## Problem Statement ##
## cAPS lOCK
## https://codeforces.com/problemset/problem/131/A

############################################### Code begins here ##############################################################

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    
    //checking if lower case exist in string portion after first letter. if yes return the same string else move to below code
    for(int i=s.size()-1;i>0;i--){
        if(islower(s[i])) {cout<<s; return 0;}
    }
    
    //first letter capital or not
    int flag=(islower(s[0]))?1:0;

    for(auto&c:s)
        c=tolower(c);
    if(flag==1)
        s[0]=toupper(s[0]);
 
    cout<<s;

}


