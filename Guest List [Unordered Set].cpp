//https://open.kattis.com/submissions/17583406
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    unordered_set<string> names;
    for (int i = 0; i < n; ++i)
    {
        char c;
        string s;
        cin >> c >> s;
        if (c == '?') cout << (names.count(s) ? "Jebb\n" : "Neibb\n");
        else if (c == '+') names.insert(s);
        else names.erase(s);
    }
    return 0;
}
