//https://open.kattis.com/submissions/15571360
//50%
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n,m,x,y=0,a[1000001]={0};
    cin >> n >> m;
    for(int i=0;i<n;++i) {cin >> x; a[x]=1;}
    for(int i=0;i<m;++i) {cin >> x; a[x]++;}
    cin.ignore();
    cin.ignore();
    for(int i=0;i<1000000;++i) if(a[i]==2) y++;
    cout << y;
    return 0;
}
