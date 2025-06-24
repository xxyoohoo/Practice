#include <bits/stdc++.h>
using namespace std;
// 1 p: Replace PC string with server string
// 2 p s: Append s to  end of PC p.
// 3 p: Replace server string with PC p.
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int pcn, n, x, act;
    cin >> pcn >> n;
    vector<int> op(n), p(n);
    vector<string> s(n);
    for (int i=0; i < n; ++i)
    {
        cin >> act >> x;
        op[i]=act;
        p[i]=x;
        if (act==2)
        {
            cin >> s[i];
            reverse(s[i].begin(), s[i].end()); // store reversed for later re-reversing
        }
    }
    string server;
    int cur_pc=0;
    for (int i=n-1;i>=0;--i)
    {
        if (op[i]==1)
        {
            if (cur_pc==p[i]) server.clear();
        }
        else if (op[i]==2)
        {
            if (cur_pc==p[i]) server +=s[i];
        }
        else if (op[i]==3)
        {
            if (cur_pc==0) cur_pc=p[i];
        }
    }
    reverse(server.begin(), server.end()); // undo appending of reversed strings
    cout << server << '\n';
    return 0;
}
