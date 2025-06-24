#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,a[100],s=0;
    cin >> n >> m;
    for (int i=0;i<n;++i) cin >> a[i];
    sort(a,a+n);
    for (int i = 0; i < m; ++i)
    {
        if (a[i]>=0) break;
        s+=a[i];
    }
    cout << -s << endl;
    return 0;
}