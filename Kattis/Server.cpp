//https://open.kattis.com/challenge/e7zx8ume/submissions/17227295
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin >> n >> x;
    for(int i=0;i<n;++i)
    {
        cin >> y;
        x-=y;
        if(x<0) {cout << i; return 0;}
    }
    cout << n;
    return 0;
}
