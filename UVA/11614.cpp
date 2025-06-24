
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,x;
    cin >> n;
    while(cin >> x) cout << (long long)((sqrt(1+(8*x))-1)/2) << endl;
    return 0;
}
