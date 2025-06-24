#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s1,s2;
    cin >> n>> s1 >> s2;
    for(int i=0;i<n;++i)
    {
        if(s1[i]==s2[i] && s1[i]=='o')
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}

