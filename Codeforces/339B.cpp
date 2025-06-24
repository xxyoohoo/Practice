#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n,m,loc=1,ans=0;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int now;
        cin >> now;
        if(now>=loc) ans+=now-loc;
        else ans+=n-(loc - now);
        loc=now;
    }
    cout << ans << endl;
    return 0;
}