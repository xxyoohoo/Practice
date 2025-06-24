//https://open.kattis.com/submissions/13663849
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y;
    cin >> n >> k;
    x=n*(k+1);
    for (int i=0;i<k;++i) {cin >> y; x-=y;}
    cout << x;
}
