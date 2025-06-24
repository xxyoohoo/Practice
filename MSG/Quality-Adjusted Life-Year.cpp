//https://open.kattis.com/submissions/13663829
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,ans;
    int n;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> x >> y;
        ans+=x*y;
    }
    cout << ans;
}
