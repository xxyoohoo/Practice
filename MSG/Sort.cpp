//https://open.kattis.com/submissions/17466379
#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> freq,occ;
bool comp(int a, int b)
{
    if(freq[a]!=freq[b]) return freq[a]>freq[b];
    return occ[a]<occ[b];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,x;
    cin >> n >> m;
    vector<int>a;
    for(int i=0;i<n;++i) {cin >> x; a.push_back(x);}
    for(int i=0;i<n;++i)
    {
        freq[a[i]]++;
        if(occ.find(a[i])==occ.end()) occ[a[i]]=i;
    }
    stable_sort(a.begin(),a.end(),comp);
    for (int i:a) cout << i << ' ';
    cout << '\n';
    return 0;
}
