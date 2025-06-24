//https://open.kattis.com/submissions/15507525
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char a;
    cin >> a;
    cout << a;
    while(cin >> a)
    {
        if(a=='-')
        {
            cin >> a;
            cout << a;
        }
    }
    return 0;
}
