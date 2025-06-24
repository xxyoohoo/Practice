#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int size (int n)
{
    int c=0;
    while (n!=0)
    {
        n/=10;
        ++c;
    }
    return c;
}
int main()
{
    string a,b;
    cin >> a >> b;
    for(int i=0;i<a.length();++i)
    {
        if(a[i]!=b[i]) cout << 1;
        else cout << 0;
    }
}