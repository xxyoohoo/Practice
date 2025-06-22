//https://open.kattis.com/submissions/17589388
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << '+';
    for(int i=0;i<n;++i) cout << '-';
    cout << '+' << '\n';
    for(int j=0;j<n;++j)
    {
        cout << '|';
        for(int i=0;i<n;++i) cout << ' ';
        cout << '|' << '\n';
    }
    cout << '+';
    for(int i=0;i<n;++i) cout << '-';
    cout << '+' << '\n';
    return 0;
}
