#include <iostream>
using namespace std;
int main()
{
    int n,p;
    cin >>n>>p;
    int mn=p,mx=p,a=0;
    while (--n)
    {
        cin>>p;
        if (p<mn){mn=p;++a;}
        if (p>mx){mx=p;++a;}
    }
    cout <<a<< endl;
    return 0;
}