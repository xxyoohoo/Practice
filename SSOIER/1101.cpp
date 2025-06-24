#include<iostream>
using namespace std;
int main()
{
    int sum=0,a,b,c,x,y;
    cin >> a >> b >> c;
    for(x=0;x<=1000;++x)
    {
        for(y=0;y<=1000;++y)
        {
            if(a*x+b*y==c)
            {
            ++sum;
            }
        }
    }
    cout << sum << endl;
}
