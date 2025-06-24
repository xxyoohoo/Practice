//https://open.kattis.com/submissions/17589404
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    set<int>s;
    while(cin >> x) s.insert(x%42);
    cout << s.size();
    return 0;
}
