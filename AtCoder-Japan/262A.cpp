#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%4==0) cout << n+2;
    if(n%4==1) cout << n+1;
    if(n%4==2) cout << n;
    if(n%4==3) cout << n+3;
}