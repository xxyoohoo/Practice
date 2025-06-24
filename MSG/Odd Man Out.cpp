//https://open.kattis.com/challenge/a6ou58zk/submissions/17227471
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n;
    for (int i=1;i<=n;++i)
    {
        cin >> x;
        int y=0,z;
        for (int j=0;j<x;++j){cin >> z; y ^= z;} //x^x=0,x^0=x
        cout << "Case #" << i << ": " << y << endl;
    }
    return 0;
}
