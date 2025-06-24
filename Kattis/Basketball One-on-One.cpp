//https://open.kattis.com/submissions/17447576
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a=0,b=0,c=0;
    string s;
    cin>> s;
    for (int i=0;i<s.length();i+=2)
    {
        int x=s[i+1]-'0';
        if(s[i]=='A') a+=x;
        else b+=x;
        if(a>=11||b>=11)
        {
            if(a>=10&&b>=10) if(abs(a-b)>=2) {cout << (a>b?'A':'B') << '\n'; return 0;}
            else
            { 
                if(a>=11) {cout << 'A' << '\n'; return 0;}
                if(b>=11) {cout << 'B' << '\n'; return 0;}
            }
        }
    }
}
