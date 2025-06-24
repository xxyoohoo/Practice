#include<iostream>
#include <cassert>

using namespace std;
int main()
{
    const int N = 50000;
    int m,n,i,t,f1=0,f2=0,r2,r1,x=0,a[N],b[N];
    cin >> m >> n;
    for(i=0;i<m;++i) a[i]=i+1;
    for(i=0;i<n;++i) b[i]=i+1;
    r1=m-1;
    r2=n-1;
    cin >> t;
    assert (m < N && n < N);
    while (x<t)
    {
        cout << a[f1] << " " << b[f2] << endl;
        r1++;
        r1%=N;
        a[r1]=a[f1];
        f1++;
        f1%=N;
        r2++;
        r2%=N;
        b[r2]=a[f2];
        f2++;
        f2%=N;
        x++;
    }
    return 0;
}
