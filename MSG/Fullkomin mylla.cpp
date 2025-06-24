//https://open.kattis.com/challenge/s79qtngu/submissions/17227361
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a=0,h=0,a1=0,h1=0;
    char c;
    cin >> n;
    while(cin >> c)
    {
        if(c=='H') h1++;
        else a1++;
        if(h1==3) {h++; a1=0; h1=0;}
        if(a1==3) {a++; a1=0; h1=0;}
        if(h==n) {cout << "Arnar"; return 0;}
        if(a==n) {cout << "Hannes"; return 0;}
    }
    return 0;
}
