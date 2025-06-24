#include<iostream>
using namespace std;
int perfect(int n)
{
    int a,b,c,d;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    if((a!=b) && (a!=c) && (a!=d) && (b!=c) && (b!=d) && (c!=d)) return 1;
    return 0;
}
int main()
{
    int x;
    cin >> x;
    ++x;
    while (!perfect(x))
    {
        ++x;
    }
    cout << x;
    return 0;
}