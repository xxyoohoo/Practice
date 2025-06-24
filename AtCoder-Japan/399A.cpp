//https://atcoder.jp/contests/abc399/submissions/64351935
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x=0;
    string a,b;
    cin >> n >> a >> b;
    for(int i=0;i<n;++i) if(a[i]!=b[i]) ++x;
    cout << x;
}
