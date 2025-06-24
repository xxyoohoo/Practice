//https://open.kattis.com/submissions/13904886
#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> x(101, 1);
long long ans=0;
bool ok()
{
    int hasl=0,vow=1,cnt=0;
    for (char &c: s)
    {
        if (c=='L') hasl=1;
        if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            if (vow) ++cnt;
            else {vow=1;cnt=1;}
        }
        else
        {
            if (vow){vow=0; cnt=1;}
            else ++cnt;
        }
        if (cnt>=3) return 0;
    }
    return hasl;
}

void funct(int i)
{
    if (i==s.length())
    {
        if (ok())
        {
            long long count=1;
            for (int j=0; j<s.size(); ++j) count*=x[j];
            ans+=count;
        }
        return;
    }

    if (s[i]!='_') funct(i+1);
    else
    {
        s[i]='L';
        funct(i+1);
        s[i]='B';
        x[i]=20;
        funct(i+1);
        s[i]='A';
        x[i]=5;
        funct(i+1);
        s[i]='_';
        x[i]=1;
    }
}

int main()
{
    cin >> s;
    funct(0);
    cout << ans;
    return 0;
}
