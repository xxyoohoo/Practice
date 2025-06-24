//https://open.kattis.com/submissions/13694179
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> y;
        if(y<0) {++x;}
    }
    cout << x;
}
