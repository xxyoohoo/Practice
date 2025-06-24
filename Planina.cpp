#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y=1;
    cin >> x;
    for(int i=0;i<x;++i) y*=2;
    ++y;
    cout << y*y;
    return 0;
}
