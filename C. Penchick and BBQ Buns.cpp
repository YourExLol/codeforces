## Problem Statement ##
## C. Penchick and BBQ Buns
## https://codeforces.com/contest/2031/problem/C

############################################### Code begins here ##############################################################

//if n is even print 1 1 2 2 .....
//for odd n<27 no soln exist
//for n=27 solution exist due put 1 at 1,10,26 (pythogorean triplet) and 2 at 2 and 27
//for odd >27 print n=27 solution now remaining spot begcomes even and print even soln

#include <bits/stdc++.h>
using namespace std;

template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& element : v) is >> element;
    return is;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //vector<int> v(n);
        if(n%2==0){
            for(int i=1;i<=(n/2);i++)
            cout<<i<<" "<<i<<" ";
        }
        else if(n<27) cout<<-1;
        else {
            cout<<"1 2 2 3 3 4 4 5 5 1 6 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 6 ";
            for(int i=14;i<=(n/2);i++)
            cout<<i<<" "<<i<<" ";
        }



        cout<<endl;
    }
}
