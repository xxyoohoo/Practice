#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b;
    a = 4; b = 2; // cin >> a>> b;
    if(max(a,b)/2==min(a,b)) cout << "Yes";
    else cout << "No";
}