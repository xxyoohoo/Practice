#include<iostream>
using namespace  std;
int main()
{
    int a[1001],i,n;
    cin>> n;
    for(i=1;i<=n;++i)
    {
        cin>> a[i]; 
    }
    a[0]=a[1];
    for(i=1;i<=n-1;++i)
    {
       a[i]=a[i+1];
    }
    a[n]=a[0];
    for(i=1;i<=n;++i)
    {
        cout << a[i] << " ";
    }
    return 0;    
}

