#include<iostream>
using namespace std;
int main()
{
    int n,a,m,b,c[100001];
    long long v=0,p=0;
    cin >> n >> m;
    for (int i=1;i<=n;++i)
    {
        cin >> a;
        c[a] = i;
    }
    while (m--)
    {
        cin >> b;
        v+=c[b];
        p+=(n+1-c[b]);
    }
    cout << v << p;
}