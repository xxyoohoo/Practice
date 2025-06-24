//https://open.kattis.com/submissions/13826843
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    double t=0,b=0;
    char a;
    cin >> x >> y;
    for(int i=0;i<x;++i)
    {
        for(int j=0;j<y;++j)
        {
            cin >> a;
            if(a=='.') ++t;
            ++b;
        }
    }
    printf("%.7f",t/b);
}
