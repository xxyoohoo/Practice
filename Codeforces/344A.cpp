#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    a=1,b=n*n;
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n/2;j++)
        {
            cout<<a<<" ";
            //cout << "j1=" << j << "a=" << a << endl;
            a++;
        }
        for(int j=0;j<n/2;j++)
        {
            cout<<b<<" ";
            b--;
            //cout << "j2=" << j << "b=" << b << endl;
        }
        cout<<endl;
    }
    return 0;
}