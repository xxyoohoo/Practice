#include<iostream>
using namespace std;
int main()
{
    int n,a[1001];
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        if(a[i]%2==0) cout << a[i] << " ";
    }
}