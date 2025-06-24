#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int lens, x=0;
    lens=s.length();
    for(int i=lens-1;i>=0;--i)
    {
        if(s[i]=='<') {x++; s[i]='.';}
        else if (x>0) {s[i]='.'; x--;}
    }
    for(int i=0;i<lens;++i) if(s[i]!='.') cout << s[i];
    return 0;
}
