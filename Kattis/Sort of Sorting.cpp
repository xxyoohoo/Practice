//https://open.kattis.com/submissions/17464534
#include <bits/stdc++.h>
using namespace std;
bool check(const string &a,const string&b){ return a.substr(0,2)<b.substr(0,2);}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,b=1;
    while(cin >> n,n)
    {
        cin.ignore();
        vector<string>s(n);
        for(int i=0;i<n;++i) getline(cin,s[i]);
        stable_sort(s.begin(),s.end(),check);
        if(!b) cout << '\n';
        b=0;
        for(auto &i:s) cout << i << '\n';
    }
    return 0;
}
