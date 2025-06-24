#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,c2=4;
    cin >>a>>b>>c>>d;
    if(a==b||a==c||a==d)c2--;
    if(b==c||b==d)c2--;
    if(c==d)c2--;
    if(a==b&&b==c&&c==d) c2=3;
    cout << c2;
}