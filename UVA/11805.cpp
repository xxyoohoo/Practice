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
        for(int j=1;j<=c;++j)
        {
            b++;
            if(b==a+1) b=1;
        }
        cout << "Case " << i << ": " << b << endl;
    }
    return 0;
}
