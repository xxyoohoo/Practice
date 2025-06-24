#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],m;
    cin >> n >> m;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    for(int i=m+1;i<=n;++i)
    {
        cout << a[i] <<" ";
    }
    if(m>n) m=n;
    for(int i=1;i<m;++i)
    {
        cout << "0 ";
    }cout <<"0" << endl;
}