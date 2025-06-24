#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    while(cin >> a >> b)
    {
        if(a==-1) return 0;
        if(abs(a-b)>50) cout << 100-(abs(a-b)) << endl;
        else cout << abs(a-b) << endl;
    }
    return 0;
}
