#include<iostream>
#include<cstdio>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    char a1[210],b1[210];
    int a[210],b[210],c[210],lena,lenb,lenc=0,x=0,i;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    fgets(a1, 209, stdin);
    fgets(b1, 209, stdin);
    lena=strlen(a1) - 1;
    lenb=strlen(b1) - 1;
    for(i=0;i<lena;++i)
    {
        a[i]=a1[lena-1-i]-'0';
    }
    for(i=0;i<lenb;++i)
    {
        b[i]=b1[lenb-1-i]-'0';
    }
    while(lenc<lena||lenc<lenb)
    {
        c[lenc]=a[lenc]+b[lenc]+x;
        x=c[lenc]/10;
        c[lenc]%=10;
        lenc++;
    }
    c[lenc]=x;
    while(c[lenc]==0 && lenc > 0)
    {
        lenc--;
    }
    for(i=lenc;i>=0;--i)
    {
        cout << c[i];
    }
    return 0;
}
