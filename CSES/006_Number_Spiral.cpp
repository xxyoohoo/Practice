// Note that '^' means XOR and not to the power of
#include<iostream>
using namespace std;

int main()
{
    unsigned long long n,x,y;
    cin >> n;
    for(unsigned long long i=0;i<n;++i)
    {
        cin >> x >> y;
        if(y>x)
        {
            if(y%2==1) cout << (y*y)-(x-1) << endl;
            if(y%2==0) cout << (y-1)*(y-1)+1+(x-1) << endl;
        }
        if(x>=y)
        {
            if(x%2==1) cout << (x-1)*(x-1)+1+(y-1) << endl;
            if(x%2==0) cout << (x*x)-(y-1) << endl;
        }
    }
}
