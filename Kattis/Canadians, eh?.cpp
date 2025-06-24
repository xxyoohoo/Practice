//https://open.kattis.com/challenge/wxf6m9z3/submissions/17562657
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    if(s[0]=='?' && s[1]=='h' && s[2]=='e') cout << "Canadian!";
    else cout << "Imposter!";
    return 0;
}
