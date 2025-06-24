//https://open.kattis.com/submissions/13834744
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,a,b,c,z=0;
    cin >> x;
    while(x--)
    {
        cin >> a >> b >> c;
        z=0;
        while(a<=c)
        {
            a*=b;
            z++;
        }
        cout << z << endl;
    }
}
