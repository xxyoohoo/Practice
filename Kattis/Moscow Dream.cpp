//https://open.kattis.com/submissions/13724015
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>=1 && b>=1 && c>=1 && a+b+c>=d && d>=3)cout << "YES";
    else cout << "NO";
}
