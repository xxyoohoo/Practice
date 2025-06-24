#include<iostream>
using namespace std;
int main()
{
    int a=1,c=1992,n;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        a*=c;
        a%=100;
    }
    cout << a;
}