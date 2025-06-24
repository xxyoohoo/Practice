#include<iostream>
#include <cstdio>
using namespace std;

double max1 (double a,double b,double c)
{
    double m=a;
    if(m<b) m=b;
    if(m<c) m=c;
    return m;
}
int main()
{
    double a,b,c,m;
    cin>> a >> b >> c;
    m=max1(a,b,c)/(max1(a+b,b,c)*max1(a,b,b+c));
    printf("%.3lf",m);
}

