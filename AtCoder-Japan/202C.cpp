#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    vector<int> count(n);
    for (auto& i:a){cin >> i; i-=1;}
    for (auto& i:b){cin >> i; i-=1;}
    for (auto& i:c){cin >> i; i-=1;}
    for (int j=0; j<n;++j) count[b[c[j]]]+=1;
    for (int i=0; i<n;++i) ans+=count[a[i]];
    cout << ans << '\n';
}
