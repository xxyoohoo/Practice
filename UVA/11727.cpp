#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a >> b >> c;
        cout << "Case " << i << ": ";
        if((a<b && a>c)||(a>b && a<c)) cout << a;
        if((b<a && b>c)||(b>a && b<c)) cout << b;
        if((c<a && c>b)||(c>a && c<b)) cout << c;
        cout << endl;
    }
    return 0;
}
