#include<iostream>
using namespace std;
int p(int k)
{
    int c,a=1,b=2;
    if(k==2)  return 2;
    if(k==1)  return 1;
    for(int j=3;j<=k;++j) {c=b*2+a; a=b; b=c; c%=32767; a%=32767; b%=32767;} return c;
}
int main()
{
    int n,a;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a; cout << p(a) << endl;
    }
}
//forfdsfg
//{a;}
2 1 8
