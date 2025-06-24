#include<iostream>
using namespace std;
int main()
{
    int n,a[100],t,x=0;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        if(a[i]>x) {x=a[i];t=i;};
    }
    if(n==1) {cout << 1;return 0;}
    cout << t;
}