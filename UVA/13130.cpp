#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c,d,e;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a >> b >> c >> d >> e;
        if(a+1==b&&b+1==c&&c+1==d&&d+1==e) cout << 'Y' << endl;
        else cout << 'N' << endl;
    }
    return 0;
}
