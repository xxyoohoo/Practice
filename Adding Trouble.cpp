//https://open.kattis.com/submissions/16855027
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b==c) cout << "correct!";
    else cout << "wrong!";
    return 0;
}
