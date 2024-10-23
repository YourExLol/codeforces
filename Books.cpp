## Problem Statement ##
## Books
## https://codeforces.com/problemset/problem/279/B

############################################### Code begins here ##############################################################

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,t;
    cin>>n>>t;

    int index,c_time,c_ans,f_ans;
    index=0; //starting index of book from which range is considered
    c_time=0; // current total time
    c_ans=0; // current ans 
    f_ans=0; // final ans
    
    //Storing Time
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //Transversing Array
    for(int i=0;i<n;i++){
        c_time+=arr[i];
        
        //incase c_time is less we move to next book, and update the f_ans
        if(c_time<=t){
             c_ans++;
             f_ans=max(f_ans,c_ans);
        }
        
        //incase the new a[i] increases c_time beyond t we remove all elements from index onwards till c_time<t and keep increasing index and decreasing c_ans
        if(c_time>t){
          c_ans++; //include current book
            while(c_time>t){
                c_time=c_time-arr[index];
                index++;
                if(c_ans>0) c_ans--;
            }
        
        }
    }//for loop ends here

    cout<<f_ans;
}
