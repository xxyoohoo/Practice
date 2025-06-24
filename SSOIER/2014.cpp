#include<iostream>
using namespace std;
int main()
{
    int a[21][21],i,j,n;
    cin >> n;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n;++j)
        {
            cin >> a[i][j];
        }
    }
    
    for(i=1;i<=n;++i)
    {
        for (j=1;j<=n;++j)
        {
            if(i==j||i+j==n+1)
            {
                a[i][j]+=10;
            }
        }
    }
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n;++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
