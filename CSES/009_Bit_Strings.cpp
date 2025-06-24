#include <iostream>
using namespace std;

int main() 
{
    int n,m=1000000007,ans=1;
    cin >> n;
    for (int i=0;i<n;i++) 
    {
        ans*=2;
        ans%=m;
    }
    cout << ans;
}