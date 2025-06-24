#include<iostream>
using namespace std;
bool a[4][4];

void flipgrid(int i, int j)
{
    if(i<1||j<1||i>3||j>3) return;
    a[i][j]=!a[i][j];
}

void printa()
{
    for(int i=1;i<=3;++i)
    {
        for(int j=1;j<=3;++j)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    for(int i=1;i<=3;++i)
        for(int j=1;j<=3;++j)
            a[i][j]=1;
   // printa();
    int x;
    for(int i=1;i<=3;++i)
    {
        for(int j=1;j<=3;++j)
        {
            cin >> x;
            x%=2;
            if(x) 
            {
                // flipgrid(i-1,j-1);
                flipgrid(i-1,j);
                // flipgrid(i-1,j+1);

                flipgrid(i,j-1);
                flipgrid(i,j);
                flipgrid(i,j+1);
                
                // flipgrid(i+1,j-1);
                flipgrid(i+1,j);
                // flipgrid(i+1,j+1);

                //printa();
                //cout << endl;
            }
        }
    }

    printa();
}