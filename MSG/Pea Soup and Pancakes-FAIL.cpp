#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,x=0;
    string s,t;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> m;
        getline(cin,t); 
        for(int j=0;j<m;++j)
        {
            getline(cin,s); 
            if(s=="pea soup" || s=="pancakes") ++x;
            if(x==2) {cout << t; return 0;}
        }
        x=0;
    }
    cout << "Anywhere is fine I guess";
    return 0;
}
