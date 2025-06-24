#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y;
    while(cin >> x)
    {
        cin >> y;
        cout << max(x,y)-min(x,y) << endl;
    }
}
