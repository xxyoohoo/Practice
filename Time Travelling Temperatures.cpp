//https://open.kattis.com/submissions/13686948
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x==0&&y==1) cout << "ALL GOOD";
    else if (y==1) cout << "IMPOSSIBLE";
    else printf("%.6f",x/(1.0-y));
    return 0;
}
