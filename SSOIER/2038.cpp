#include<iostream>
using namespace std;
int main()
{
    int i,m=1,n,a[1001];
    cin >> n;
    for(i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    for(i=1;i<=n;++i)
    {
        if(a[m]<a[i])
        {
            m=i;
        }
    }
    cout << m;
}
