//https://open.kattis.com/challenge/qgrbuqjj/submissions/17447448
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,a;
    cin >> x >> y;
    for(int i=0;i<x;++i) cin >> a;
    if(x>=8) cout << "satisfactory\n";
    else cout << "unsatisfactory\n";
    return 0;
}
