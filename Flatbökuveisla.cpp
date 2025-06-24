//https://open.kattis.com/submissions/13834320
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z=0,a;
    cin >> x >> y;
    a=x;
    while(x>=y)
    {
        x-=y;
        ++z;
    }
    cout << a-(z*y);
}
