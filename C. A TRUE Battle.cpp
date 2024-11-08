## Problem Statement ##
## C. A TRUE Battle
## https://codeforces.com/problemset/problem/2030/C

############################################### Code begins here ##############################################################

//And is higher precendence than OR. Putting OR Divided Whole Expression into sub expression. {Something1) OR (Something2) OR (something3) all the something can be evaluated idependently
//if there exist true at start or end Alice will always win. She need to put or after true if startis true and before true if end is true  1 OR (something) , (something) OR 1
// if there are two true's consecutively, Alice can also win. Alice may place or before the first of the two on her first move. If Bob does not put his operator between the two true's, then Alice will put an or between the two true's on her next move and win. 
//Otherwise, Bob does place his operator between the two true's. However, no matter what Bob placed, the two true's will always evaluate to true, so on her second move Alice can just place an or on the other side of the two true's to win.
//In any other cases Bob can cancel Alice OR by placing And as the previous or next expression.
//Incase Alice have last turn, the expression would be 0 0 and nothing would make it 1.

#include <bits/stdc++.h>
using namespace std;

template<typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& element : v) is >> element;
    return is;
}

string fn(string s,int n){
    if(s[0]=='1' || s[n-1]=='1')  return "YES";

    for(int i=0;i<n-1;i++){
        if(s[i]=='1' && s[i+1]=='1') return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<fn(s,n)<<endl;  
    }
}
