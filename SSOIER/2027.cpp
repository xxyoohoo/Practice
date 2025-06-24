#include<iostream>
using namespace std;
int main()
{
   long long n,i=1,a;
    cin >> n;
    for(;i<=n;i++)
    {
        for(a=1;a<=i;a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
