//https://open.kattis.com/submissions/17447427
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,y,z=0;
    cin >> n;
    for(int i=0;i<n;++i) {cin >> y; z+=y;}
    cout << z;
    return 0;
}
