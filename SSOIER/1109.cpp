#include<iostream>
using namespace std;

int main()
{
    int n,m,a[5001],b[5001];
    cin >> n >> m;
    for(int i=1;i<=n;++i)
    {
        a[i]=0;
    }
    for(int i=1;i<=m;++i)
    {
        b[i]=i;
    }
    for(int i=1;i<=m;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(b[i]%j==0) a[i]=1;
        }
    }
    for(int i=1;i<=n;++i)
    {
        if(a[i]==1) cout << i << ",";
    }
}