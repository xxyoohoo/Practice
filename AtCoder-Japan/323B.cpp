#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int n,b[100];
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> s;
        for(int j=0;j<n;++j)
        {
            if(s[j]=='o') b[i]++;
        }
    }
    for(int j=1;j<=n;++j) sort(b+n,b);
    for(int j=1;j<n;++j) cout << n << ' ';
}