#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int lwc=0,upc=0;
    cin >> s;
    for(int i=0;i< s.length();++i)
    {
        if(s[i]>='A'&&s[i] <='Z') upc++;
        else lwc++;
    }
    if(upc>lwc)
    {
        for(int i=0;i<s.length();++i)
        {
            if(s[i]>='a'&&s[i]<='z') s[i]-=('a'-'A');
        }
    }
    if(lwc>upc || lwc==upc)
    {
        for(int i=0;i<s.length();++i)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]+=('a'-'A');
        }
    }
    /* for(int i=0;i< s.length();++i)
    {
        if(upc>lwc && (s[i]>='a'&& s[i]<='z')) s[i]-=('a'-'A');// if more upc && is lwc;
        else if (s[i]>='A'&& s[i] <='Z') s[i]+=('a'-'A'); // if even&& upc || if more lwc&& upc;
    } */
    cout << s;
}
