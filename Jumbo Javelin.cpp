//https://open.kattis.com/submissions/13834117
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z=0;
    cin >> x;
    for(int i=0;i<x;++i)
    {
        cin >> y;
        z+=y;
    }
    cout << z-x+1;
