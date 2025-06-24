//https://cses.fi/problemset/result/13074665/
#include <bits/stdc++.h>
using namespace std;
long long count(int x)
{
    vector<long long> v(x+1);
    v[0]=1;
    for(long long i=1;i<=x;++i)
    {
        for(int j=1;j<=6;++j)
        {
            if(i-j>=0) v[i]+=v[i-j];
        }
    }
    return v[x];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    cout << count(n);
    return 0;
}

