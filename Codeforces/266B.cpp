#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include <string>

using namespace std;
int main()
{
    int n, t;
    // char s[1000];
    string s;
    cin >> n >> t >> s;
    //cout << s  << " length:" << s.length() << endl;
    // fgets(s,1000,stdin);
    //cout << "Im_here!" << endl;
    for(int i=0;i<t;++i)
    {
        for(int j=1;j<n;++j)
        {
            if(s[j]=='G'&& s[j-1]=='B'){swap(s[j],s[j-1]); j++;}
        }
    }
    cout << s;
}