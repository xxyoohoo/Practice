//https://open.kattis.com/challenge/pcnvkkfu/submissions/17562643
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h=0,t=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='H') ++h;
        if(s[i]=='T') ++t;
        if((h>=t+2 && h>=11) || (t>=h+2 && t>=11)) {t=0;h=0;}
    }
    cout << t << '-' << h;
    return 0;
}
