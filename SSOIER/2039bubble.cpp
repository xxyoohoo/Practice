#include<iostream>
using namespace std;
int main()
{
    int i,j,n,x,a[1000];
    cin >> n;
    for(i=0;i<n;++i)
    {
        cin >> a[i];
    }
    for(i=1;i<=n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(a[j]<a[j+1])
            {
               x=a[j+1];
               a[j+1]=a[j];
               a[j]=x; 
            }
        }
    }
    for(i=0;i<=n-1;++i)
    {
        cout << a[i] << endl;
    }
}
