## Problem Statement ##
## B. Minority
## https://codeforces.com/problemset/problem/1633/B

############################################### Code begins here ##############################################################

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
        string s;
        cin>>s;

        int z=0;
        int one=0;
        for(auto c:s)
            (c=='0')?z++:one++;
        
        //incase equal by removing first or last character, either zero or one count will decrease by 1
        if(z==one) cout<<z-1;
        else if(z>one) cout<<one;
        else cout<<z;
        cout<<endl;
    }
}
