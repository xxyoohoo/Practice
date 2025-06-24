//https://atcoder.jp/contests/abc042/submissions/64352067
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    if(a==5 && b==5 && c==7) cout << "YES";
    else if(a==5 && b==7 && c==5) cout << "YES";
    else if(a==7 && b==5 && c==5) cout << "YES";
    else cout << "NO";
}

