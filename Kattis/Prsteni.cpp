//https://open.kattis.com/challenge/wspmcig7/submissions/17562717
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,z;
    cin >> n >> x;
    vector<int> v;
    for(int i=0;i<n-1;++i) {cin >> z; v.push_back(z);}
    for(int i=0;i<n-1;++i)
    {
        int a=__gcd(x,v[i]); //std::gcd
        cout << x/a << '/' << v[i]/a << '\n';
    }
    return 0;
}
