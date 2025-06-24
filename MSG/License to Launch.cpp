//https://open.kattis.com/submissions/13794654
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y,mn=100001;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> y;
        if(y<mn) {x=i;mn=y;}
    }
    cout << x;
}
