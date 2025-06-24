#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    string a;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a;
        if(a=="++X"||a=="X++") ++x;
        if(a=="--X"||a=="X--") x--;
    }
    cout << x;
}