//https://open.kattis.com/submissions/17162977
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,y,x=0,z;
    for(int i=1;i<=5;++i)
    {
        z=0;
        cin >> a >> b >> c >> d;
        z=a+b+c+d;
        if(z>x){y=i;x=max(z,x);}
    }
    cout << y << ' ' << x;
    return 0;
}
