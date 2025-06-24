//https://open.kattis.com/submissions/17454248
#include <bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,as=0,bs=0,gs=0;
    string s,a="ABC",b="BABC",g="CCAABB";
    cin >> n >> s;
    for(int i=0;i<n;++i)
    {
        if(s[i]==a[i%3]) as++;
        if(s[i]==b[i%4]) bs++;
        if(s[i]==g[i%6]) gs++;
    }
    cout << max(as,max(bs,gs)) << endl;
    if(as==max(as,max(bs,gs))) cout << "Adrian\n";
    if(bs==max(as,max(bs,gs))) cout << "Bruno\n";
    if(gs==max(as,max(bs,gs))) cout << "Goran\n";
    return 0;
}
