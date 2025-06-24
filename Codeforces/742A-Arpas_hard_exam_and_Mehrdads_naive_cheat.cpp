#include<iostream>
using namespace std;
int main() 
{
    int n; 
    cin >> n;
    int m=n%4;
    if (n == 0) cout << 1;
    else if (m == 1) cout << 8;
    else if (m == 2) cout << 4;
    else if (m == 3) cout << 2;
    else cout << 6;
    return 0;
}