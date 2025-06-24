#include<iostream>
using namespace std;
int k,l,m,n,d,a=0,b[100001]={0};
int harm(int x)
{
    for(int i=x;i<=d;i+=x) b[i]=1;
}
int main()
{
    cin>>k>>l>>m>>n>>d;
    if(k==1||l==1||m==1||n==1) {cout << d; return 0;}
    harm(k);
    harm(l);
    harm(m);
    harm(n);
    for(int i=1;i<=d;++i)
    {
        if(b[i]==1)++a;
    }
    cout << a;
}