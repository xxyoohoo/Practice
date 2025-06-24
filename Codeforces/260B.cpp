#include<bits/stdc++.h>
using namespace std;
int i,j,n,x,y,z,m2=-1,m1,x[1001],math[1001],eng[1001];
int main()
{
    cin >> n >> x >> y >> z;
    for( i=1;i<=n;++i)
    {
        cin >> math[i];
    }
    for( i=1;i<=n;++i)
    {
        cin >> eng[i];
    }

    for( i=1;i<=x;++i)
    {
        for( j=1;j<=n;++j)
        {
            if(math[j]>m2) {m2=math[j];m1=j;}
        }
        math[m1]=0;
        m2=-1;
        x[i]=m1;
    }
    for( i=1;i<=y;++i)
    {
        for( j=1;j<=n;++j)
        {
            if(eng[j]>m2) {m2=eng[j];m1=j;}
        }
        eng[m1]=0;
        m2=-1;
        x[i+x]=m1;
    }
    for( i=1;i<=z;++i)
    {
        for( j=1;j<=n;++j)
        {
            if(eng[j]+math[j]>m2) {m2=eng[j]+math[j];m1=j;}
        }
        eng[m1]=0;
        math[m1]=0;
        m2=-1;
        x[i+x+y]=m1;
    }
    int n2=i+x+y;
    int t;
    for(int i=n2-1;i>1;--i)
    {
        for(int j=1;j<i;++j)
        {
            if(x[j]<x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    for(int i=1;i<=n2;++i)
    {
        cout <<x[i];
    }
    return 0;
}