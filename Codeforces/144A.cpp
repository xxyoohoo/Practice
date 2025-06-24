#include<iostream>
#include<cmath>
using namespace std;
long long n,s=99999999,sm,mx,b=-1,a[101];
int print(int x)
{
    for(int i=0;i<n;++i)
    {
        cout << a[i];
    }
}
int main()
{
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
        if(a[i]<=s) {sm=i;s=a[i];}
        if(a[i]>b) {mx=i;b=a[i];}
    }
    if(mx<sm)
    cout << mx-0+n-sm-1;
    else cout << mx-0+n-sm-2;
}