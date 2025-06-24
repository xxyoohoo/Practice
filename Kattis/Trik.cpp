//https://open.kattis.com/submissions/17589348
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a[4];
    char c;
    a[1]=1;
    a[2]=0;
    a[3]=0;
    while(cin >> c)
    {
        if(c=='A') swap(a[1],a[2]);
        else if(c=='B') swap(a[2],a[3]);
        else swap(a[1],a[3]);
    }
    if(a[1]==1) cout << 1;
    else if(a[2]==1) cout << 2;
    else cout << 3;
    return 0;
}
