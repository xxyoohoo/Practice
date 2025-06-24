#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,x,y,asw,dv=998244353;
    cin >> a >> b >> c >> d >> e >> f;
    x=((a%dv)*(b%dv))%dv;
    x=(x*(c%dv))%dv;
    y=((d%dv)*(e%dv))%dv;
    y=(y*(f%dv))%dv;
    asw=(x+dv-y)%dv;
    cout << asw << endl;
    return 0;
}