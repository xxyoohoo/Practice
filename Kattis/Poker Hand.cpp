//https://vjudge.net/solution/60255471/OCSObzD8pIaQVpaJUZZj
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ans=0;
    map<char,int> count;
    for(int i=0;i<5;++i)
    {
        cin >> s;
        count[s[0]]++;
    }
    for (auto i:count) ans=max(ans,i.second);
    cout << ans << endl;
    return 0;
}
