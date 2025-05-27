//https://open.kattis.com/submissions/17464098
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    vector<int>v;
    for(int i=0;i<5;++i) {cin >> x; v.push_back(x);}
    x=0;
    while(!is_sorted(v.begin(),v.end()))
    {
        if(x==4) x=0;
        if(v[x]>v[x+1])
        {
            swap(v[x],v[x+1]);
            for(int i=0;i<v.size();++i) cout << v[i] << ' ';
            cout << '\n';
        }
        ++x;
    }
    return 0;
}
