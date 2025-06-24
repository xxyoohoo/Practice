//https://open.kattis.com/submissions/17593453
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, a, b, ac1=0, ac2=0;
    cin >> x >> y;
    for(int i=0;i<x;++i)
    {
        cin >> a >> b;
        ac1+=(a*b*100);
    }
    for(int i=0;i<y;++i)
    {
        cin >> a >> b;
        ac2+=(a*b*100);
    }
    if(ac1==ac2) cout << "same";
    else cout << "different";
    return 0;
}
