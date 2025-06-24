#include<iostream>
using namespace std;
int main()
{
    int n,m,a[101][101]={0},t1,t2,total=0;
    cin >> n >> m;
    for(int i=1; i<=m;++i)
    {
        cin >> t1 >> t2;
        a[t1][t2]=1;
        a[t2][t1]=1;
    }
    for(int i=1;i<=n-2;++i)
    {
        for(int j=i+1;j<=n-1;++j)
        {
            for(int k=j+1;k<=n;++k)
            {
                if(a[i][j]==1 && a[j][k]==1 && a[k][i]==1) total++;
            }
        }
    }
    cout << total;
}