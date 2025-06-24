#include <iostream>
using namespace std;

int main()
{
    int n,t=0;
    cin >> n;
    for (int i=5;n/i>=1;i*=5)
    {
        t+=n/i;
    }
    cout << t;
    return 0;
}