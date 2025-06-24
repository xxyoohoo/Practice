#include<iostream>
using namespace std;
int main()
{
    int n,x=0,c=0,a[10001][3];
    cin >> n;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<3;++j)
        {
            cin >> a[i][j];
            if(a[i][j]==1)x++;
            if(j==2&&x>1){c++;x=0;}
            if(j==2&&x<2)x=0;
        }
    }
    cout << c;
}