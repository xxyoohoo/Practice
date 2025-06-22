//https://open.kattis.com/submissions/17587105
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int disc = b*b-4*a*c;
    if (disc > 0) cout << 2 << endl;
    else if (disc == 0) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
