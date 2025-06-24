//https://open.kattis.com/submissions/13686717
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> b >> a;
    if(a>b && a-b!=1) cout << "Dr. Chaz will have " << a-b << " pieces of chicken left over!";
    else if(a>b && a-b==1) cout << "Dr. Chaz will have 1 piece of chicken left over!";
    else if(a<b && b-a==1) cout << "Dr. Chaz needs 1 more piece of chicken!";
    else cout << "Dr. Chaz needs " << b-a << " more pieces of chicken!";
}
