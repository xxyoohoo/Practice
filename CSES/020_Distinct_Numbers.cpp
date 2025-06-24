#include<iostream>
#include <vector>
#include<bits/stdc++.h> // i was pathetic ignore this...
using namespace std;
int main()
{
    vector <int> v;
    int n,x;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    x=v.size();
    cout << x;
}