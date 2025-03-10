//https://open.kattis.com/submissions/16854184
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    cout << (1/x)*100 << setprecision(11) << endl;
    cout << (1/(100-x))*100 << setprecision(11) << endl;
}
