#include<iostream>
using namespace std;
int n;
long long fact(long long x)
{
    if(x==0)return 0;
    if(x==1)return 1;
    return x*=fact(x-1);
}
int main()
{
    int a;
    cin >> n;
    cout << fact(n);
}