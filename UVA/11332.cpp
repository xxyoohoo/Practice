#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int y,z;
    while(cin >> z && z!=0)
    {
        while(z>=10)
        {
            y=0;
            while(z)
            {
                y+=z%10;
                z/=10;
            }
            z=y;
        }
        cout << z << endl;
    }
    return 0;
}
