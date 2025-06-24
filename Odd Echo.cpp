//https://open.kattis.com/submissions/13817850
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;
    cin >> x;
    for(int i=0;i<x;++i)
    {
        cin >> s;
        if(i%2==0) cout << s << endl;
    }
}
