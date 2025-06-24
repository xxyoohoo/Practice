#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int i,s;
    char a[201],n,m;
    fgets(a, 200, stdin);// !!!!!
    cin >> n >> m;
    s=strlen(a);
    for(i=0;i<s;++i)
    {
        if(a[i]==n)
        {
            a[i]=m;
        }
    }
    for(i=0;i<s;++i)
    {
        cout << a[i];
    }
}
