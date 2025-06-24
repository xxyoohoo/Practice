//https://open.kattis.com/submissions/15499577
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double lens,w=0,l=0,u=0,sy=0;
    string s;
    cin >> s;
    lens=s.length();
    for(int i=0;i<lens;++i)
    {
        if(s[i]=='_') ++w;
        else if(isupper(s[i])) ++u;
        else if(islower(s[i])) ++l;
        else ++sy;
    }
    cout << fixed << setprecision(16) << w/lens << endl;
    cout << fixed << setprecision(16) << l/lens << endl;
    cout << fixed << setprecision(16) << u/lens << endl;
    cout << fixed << setprecision(16) << sy/lens << endl;
    return 0;
}
