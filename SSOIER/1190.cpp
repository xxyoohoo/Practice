#include<iostream>
using namespace std;
int main()
{
    int a[71],i,n;
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for(i=4;i<71;++i)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    while(cin >> n)
    {
        if(n==0) break;
        cout << a[n] << endl;
    }
}
