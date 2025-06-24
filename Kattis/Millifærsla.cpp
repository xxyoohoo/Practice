//https://open.kattis.com/submissions/13814344
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if(min(min(x,y),z)==x) cout << "Monnei";
    if(min(min(x,y),z)==y) cout << "Fjee";
    if(min(min(x,y),z)==z) cout << "Dolladollabilljoll";
}
