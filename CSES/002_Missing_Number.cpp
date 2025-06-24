#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,x,a[200001]={0};
    cin >> n;
    for( unsigned long long i=1;i<=n;++i)
    {
        cin >> x;
        a[x]=x;
    }
    for( unsigned long long i=1;i<=n;++i)
    {
        if(a[i]==0){cout << i; return 0;}
    }
}
