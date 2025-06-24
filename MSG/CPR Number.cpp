//https://open.kattis.com/challenge/qn35xm2x/submissions/17447408
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[]={4,3,2,7,6,5,0,4,3,2,1},x=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();++i) if(i!=6) x+=a[i]*(s[i]-'0');
    if(x%11==0) cout << 1;
    else cout << 0;
    return 0;
}
