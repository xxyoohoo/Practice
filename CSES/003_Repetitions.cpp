#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main() 
{
    string s;
    char a;
    int c=0,ans=0;
    cin >> s;
    for (int i=0;i<s.length();i++) 
    {
        if (s[i]!=a) {a=s[i];c=0;}
        if (s[i]==a)c++;
        ans=max(ans,c);
    }
    cout << ans;
}
