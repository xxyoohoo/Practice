#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,x=9999;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=((k*l)/nl);
    if(x>(c*d)) x=c*d;
    if(x>(p/np)) x=p/np;
    cout << x/n;
}