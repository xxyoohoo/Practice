//https://open.kattis.com/challenge/x6d3ajfo/submissions/17565157
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    int n;
    string s;
    while (cin >> n >> s && n != 0)
    {
        reverse(s.begin(), s.end());
        for (char c:s)
        {
            int pos=alph.find(c);
            cout << alph[(pos+n)%28];
        }
        cout << '\n';
    }
    return 0;
}
