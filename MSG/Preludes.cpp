//https://open.kattis.com/submissions/15515351
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string m,s;
    int x=1;
    while(cin >> s)
    {
        cin >> m;
        if((s[0]>='A'&&s[0]<='F') && s[1]=='#') {cout << "Case " << x << ": " << char(s[0]+1) << "b " << m << endl; ++x;}
        else if(s.length()==1) {cout << "Case " << x << ": UNIQUE" << endl; ++x;}
        else if((s[0]>='B'&&s[0]<='G') && s[1]=='b') {cout << "Case " << x << ": " << char(s[0]-1) << "# " << m << endl; ++x;}
        else if(s[0]=='G' && s[1]=='#') {cout << "Case " << x << ": Ab " << m << endl; ++x;}
        else if(s[0]=='A' && s[1]=='b') {cout << "Case " << x << ": G# " << m << endl; ++x;}
    }
    return 0;
}
