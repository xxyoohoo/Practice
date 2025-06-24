//https://open.kattis.com/submissions/13819818
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k=0,b=0;
    cin >> s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='b') ++b;
        if(s[i]=='k') ++k;
    }
    if(b>k) cout << "boba";
    else if(b==k && b!=0) cout << "boki";
    else if(k>b) cout << "kiki";
    else cout << "none";
}
