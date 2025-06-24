#include<iostream>
using namespace std;
int f(int x)
{
    if(x==1||x==2){return 1;}
    int c;
    int a=1;
    int b=1;
    for(int i=3;i<=x;++i){c=a+b;a=b;b=c;a%=1000;b%=1000;}
    c%=1000;
    return c;     
}
int main()
{
    int n=0,a[10000],j=0;
    cin >> n;
    for(j=1;j<=n;++j)
    {
        cin >> a[j];
    }
   // cout << endl;
    for(j=1;j<=n;++j)
    {
        cout << f(a[j]) << endl;
    }
    
}
//1 1 2 3 5 8 13 21 34
