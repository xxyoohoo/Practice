#include <iostream>
using namespace std;

int main() 
{
    unsigned long long n,a[10000000],c=0;
    cin >> n;
    for (int i=0;i<n;++i) {cin >> a[i];}
    for (int i=1;i<n;++i) 
    {
        if (a[i]<a[i-1]) 
        {
            c+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout << c << endl;
    return 0;
}
