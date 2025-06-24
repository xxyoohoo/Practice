//https://open.kattis.com/submissions/13686582
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string a,b;
    cin >> a >> b;
    if((a=="OCT"&&b == "31")||(a=="DEC"&&b=="25")) cout << "yup" << endl;
    else cout << "nope" << endl;
}
