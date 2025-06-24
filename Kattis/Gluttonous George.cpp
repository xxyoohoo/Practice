//https://open.kattis.com/submissions/17453971
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    char c;
    cin >> a >> c >> b;
    if(a>b) cout << '>';
    else if(a<b) cout << '<';
    else cout << "Goggi svangur!";
    return 0;
}
