//https://open.kattis.com/submissions/17163164
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,y,x=0;
    cin >> y >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a >> b;
        x+=a*b;
    }
    cout << x/y;
    return 0;
}
