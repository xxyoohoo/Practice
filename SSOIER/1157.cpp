#include<iostream>
using namespace std;
bool isprime(int n)
{
    int i;
    if(n<=1) return false;
    if(n==2) return true;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;  
}
int main()
{
    int i,a,b;
    for(i=6;i<=100;i+=2)
    {    
        for(a=1;a<=i/2;++a)
        {
            b=(i-a);
                if(isprime(b)&&isprime(a))
                {
                    cout << i << "=" << a << "+" << b << endl; 
                    break;
                }
        }
    }
    }

