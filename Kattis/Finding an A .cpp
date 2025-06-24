//https://open.kattis.com/submissions/13902022
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=1;
    char a;
    while(cin >> a)
    {
        if(a=='a') x=0;
        if(x==0) cout << a;
    }
}
