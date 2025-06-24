//https://open.kattis.com/challenge/cg9qafvw/submissions/17562683
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s,a,b,c;
    int x;
    getline(cin,s);
    x=s.length()/3;
    a=s.substr(0,x);
    b=s.substr(x,x);
    c=s.substr(2*x,x);
    if(a==b||a==c) cout << a;
    else cout << b;
    return 0;
}
