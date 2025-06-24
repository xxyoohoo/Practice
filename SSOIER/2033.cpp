#include <iostream>
using namespace std;
int main()
{
    int i,n,s=1,t=0;
    cin >> n;
    for(i=1;i<=n;++i)
    {
        s=s%1000000;
        s*=i;
        t+=s;
        t=t%1000000;
    }
    cout << t;
}
