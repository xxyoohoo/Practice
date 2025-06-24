//https://open.kattis.com/submissions/13814253
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,v;
    cin >> n >> h >> v;
    cout << 4*(max(max(max(v*h,v*(n-h)),h*(n-v)),(n-h)*(n-v)));
}
