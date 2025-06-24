#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string a;
    int length=0;
    cin>>a;
    length=a.length();
    for(int i=0;i<length;i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            cout <<"YES"<< endl;
            return 0;
        }
    }
    cout <<"NO"<< endl;
    return 0;
}