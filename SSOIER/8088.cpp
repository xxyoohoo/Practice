#include<iostream>
using namespace std;
int isprime(int n)
{
    if(n<=1) return false;
    if(n==2) return true;
    for(int i=2;i<=n-1;++i)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b,x,i;
    cin >> a >> b;
    if(a>b)
    {
        x=a;
        a=b;
        b=x;
    }
    for(i=a;i<=b;++i)
    {
        if(isprime(i))
        {
            cout << i << endl;
        }
    }
}
