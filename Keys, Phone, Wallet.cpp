//https://open.kattis.com/submissions/13902128
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,k=0,p=0,w=0;
    string s;
    cin >> x;
    for(int i=0;i<x;++i)
    {
        cin >> s;
        if(s=="keys") k=1;
        else if(s=="phone") p=1;
        else if(s=="wallet") w=1;
    }
    if(k==0) cout << "keys" << endl;
    if(p==0) cout << "phone" << endl;
    if(w==0) cout << "wallet";
    if(p==1&&k==1&&w==1) cout << "ready";
}
