#include<iostream>
using namespace std;
int issquare(int n)
{
    int i;
    for(i=1;i<=n;++i)
    {
        if(i*i==n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int i=1234,a,b,c,d;
        a=i/1000%10;
        b=i/100%10;
        c=i/10%10;
        d=i%100;

    for(i=1100;i<=9999;++i)
    {

        if((i/1000)==(i/100%10)&&(i/10%10)==(i%10))
        {
            if(issquare(i))
            {
                cout << i << endl;
            }        
        }

    }
}

