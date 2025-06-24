#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j;
    char a[100003],b[27]; 
    for(i=0;i<=26;++i)
    {
        b[i]=0;
    }
    fgets(a,100000,stdin);
    n=strlen(a)-1;
    for(i=0;i<n;++i)
    {
        j=a[i]-'a';
        b[j]++;
    }
    for(i=0;i<n;++i)
    {
        j=a[i]-'a';
        if(b[j]==1)
        {
            cout << a[i];
            return 0;
        }
    }
    cout << "no";
}
