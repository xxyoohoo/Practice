//http://open.kattis.com/submissions/17623669
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin >> n >> x >> y;
    int mx=sqrt((x*x)+(y*y));
    while(n--)
    {
        int a;
        cin >> a;
        if(a<=floor(mx)) cout << "DA\n";
        else cout << "NE\n";
    }
    return 0;
}
