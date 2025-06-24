//https://open.kattis.com/problems/abc
#include <bits/stdc++.h>
using namespace std;
void srt(int &a, int &b, int &c)
{
    if(a>b)swap(a,b);
    if(b>c)swap(b,c);
    if(a>b)swap(a,b);
}
void run(int a, int b, int c, char str)
{
    if(str=='A') cout << a << ' ';
    else if(str=='B') cout << b << ' ';
    else cout << c << ' ';
}
int main()
{
    int a,b,c;
    char a1,b1,c1;
    cin >> a >> b >> c >> a1 >> b1 >> c1;
    srt(a,b,c);
    run(a,b,c,a1);
    run(a,b,c,b1);
    run(a,b,c,c1);
}
