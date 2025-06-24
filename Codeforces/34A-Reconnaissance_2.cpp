#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d=99999999,x=0,y=0,n,a[10000];
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i];
    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            if(abs(a[i]-a[j])<d) 
            {
                d=abs(a[i]-a[j]);
                x=i;
                y=j;
            }
        }
    }
    cout << x << " " << y;
}