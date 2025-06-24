#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m=0,z;
    cin >> n;
    vector<int> x,y;
    for(int i=0;i<n;++i) {cin >> z; x.push_back(z);}
    for(int i=0;i<n;++i) {cin >> z; y.push_back(z);}
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            int sq=pow(x[i]-x[j],2)+pow(y[i]-y[j],2);
            m=max(sq,m);
        }
    }
    cout << m << '\n';
    return 0;
}
