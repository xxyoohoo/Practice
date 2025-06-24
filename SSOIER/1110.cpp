#include<iostream>
using namespace std;

int main()
{
    int n,x,a[20001]={-1},c=0;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    cin >> x;
    for(int i=1;i<=n;++i)
    {
        if(a[i]==x&&c==0)
        {
            cout << i;
            ++c;
            break;
        }
    }
    if(c==0)
    {
        cout << -1;
    }
}