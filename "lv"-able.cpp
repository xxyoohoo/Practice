//https://open.kattis.com/challenge/jo7qe53h/submissions/17570690
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;
    cin >> n >> s;
    if(s.contains("lv")) cout << 0;
    else if(s.contains('l')||s.contains('v')) cout << 1;
    else cout << 2;
    return 0;
}
