//https://open.kattis.com/submissions/17451172
#include <bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int t=0,c=0,g=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='T') ++t;
        else if(s[i]=='C') ++c;
        else if(s[i]=='G') ++g;
    }
    cout << (t*t)+(c*c)+(g*g)+(7*min(t,(min(c,g)))) << endl;
    return 0;
}
