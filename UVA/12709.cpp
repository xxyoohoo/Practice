//https://vjudge.net/solution/60936590/dNkCZBn9feR2Gx25HcGd
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,l,w,h,v,bv=0,bh=0;
    while(true)
    {
        cin >> x;
        if(x==0) break;
        for(int i=0;i<x;++i)
        {
            cin >> l >> w >> h;
            v=l*w*h;
            if(h>bh || (h==bh && v>bv))
            {
                bh=h;
                bv=v;
            }
        }
        cout << bv << endl;
        bv=bh=0;
    }
    return 0;
}
