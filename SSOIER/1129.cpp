#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int s,i,nc=0;
    char a[300];
    fgets(a,299,stdin);
    s=strlen(a);
    for(i=0;i<s;++i)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            nc++;
        }
    }
    cout << nc;
}
