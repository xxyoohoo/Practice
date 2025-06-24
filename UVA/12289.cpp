#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> s;
        if(s.length()==5) cout << 3;
        else if((s[0]=='t'&&s[1]=='w')||(s[0]=='t'&&s[2]=='o')||(s[1]=='w'&&s[2]=='o')) cout << 2;
        else cout << 1;
        cout << endl;
    }
    return 0;
}
