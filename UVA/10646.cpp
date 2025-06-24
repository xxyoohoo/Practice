//https://vjudge.net/solution/51930197/Ti6lBhThs7ZizXjvWR2l
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,y;
    char a[52][3];
    cin  >> n;
    for (int i=1;i<=n;++i)
    {
        y=0;
        p=52-25;
        for (int j=0;j<52;++j) cin >> a[j];
        printf("Case %d: %s\n",i,a[32]);
    }
}
