#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    bool a[10001];9
    
    cin >> n;
    for(i=2;i<=n;++i)
    {
        a[i]=true;
    }
    for(i=2;i<=n/2;++i)
    {
         if(a[i]==true)
         {
            for(j=i*2;j<=n;j+=i){a[j]=false;}
         }
    }
    for(i=2;i<=n;++i)
    {
        if(a[i]==true) {cout << i <<endl;}
    }
}
