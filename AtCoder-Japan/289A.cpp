#include<iostream>
using namespace std;
int main()
{
    int n,b1=0,b2=1;
    char s[1000];
    cin >> n;
    scanf("%s",s);
    for(int i=0;i<n;++i)
    {
        if(s[i]=='o'){b1=1;}
    }
    for(int i=0;i<n;++i)
    {
        if(s[i]=='x'){b2=0; break;}
    }
    if(b1==1 && b2==1) cout << "Yes" << endl;
    else cout << "No" << endl;

}