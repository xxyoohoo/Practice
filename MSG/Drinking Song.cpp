//https://open.kattis.com/submissions/13817882
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;
    cin >> x >> s;
    for(int i=x;i>0;--i)
    {
        if(i==1) cout << i << " bottle of " << s << " on the wall, " << i << " bottle of " << s << ".\n";
        else cout << i << " bottles of " << s << " on the wall, " << i << " bottles of " << s << ".\n";
        if(i==1) cout << "Take it down, pass it around, no more bottles of " << s << '.' << endl;
        else if(i==2) cout << "Take one down, pass it around, 1 bottle of " << s << " on the wall." << endl;
        else cout << "Take one down, pass it around, " << i-1 <<" bottles of " << s <<" on the wall." << endl;
        cout << endl;
    }
}
