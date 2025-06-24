#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
    long long n,i=1,sum=0,j=1,a;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        a=1;
        for(j=1;j<=i;j++)
        {
            a=a*j;
        }
        sum+=a;
    }
    cout<< sum << endl;
}
