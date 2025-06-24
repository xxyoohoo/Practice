#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x=0,y=0,c=0,a[6][6];
    for(int i=1;i<=5;++i)
    {
        for(int j=1;j<=5;++j)
        {
            cin >> a[i][j];
            if(a[i][j]==1){x=i;y=j;}
        }
    }
    c+=abs(3-x)+abs(3-y);
    cout << c;
}