//https://open.kattis.com/submissions/17583548
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin >> n;
    vector<int>list(n),sortlist;
    for(int i=0;i<n;++i) {cin >> list[i]; sortlist.push_back(list[i]);}
    sort(sortlist.begin(),sortlist.end());
    for(int i=0;i<n;++i)
    {
        if(sortlist[i]!=list[i]) ++ans;
    }
    cout << ans;
    return 0;
}
