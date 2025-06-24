//https://open.kattis.com/submissions/13819837
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    int x=1;
    cin >> s;
    cin >> a;
    for(int i=0;i<s.length();++i) if(s[i]!=a[i]) ++x;
    cout << x;
}
