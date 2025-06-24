//https://open.kattis.com/submissions/17465978
#include <bits/stdc++.h>
using namespace std;
bool num(const string& s)
{
    if (s.empty()) return 0;
    for (char c:s) if (!isdigit(c)) return 0; 
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string h1,h2,s;
    vector<string> c;
    vector<double> r;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;++i)
    {
        getline(cin,s);
        h1=s.substr(0,s.find(' '));
        h2=s.substr(s.find(' ')+1,s.size()-1);
        if(num(h1))
        {
            r.push_back(stoi(h1)/2);
            c.push_back(h2);
        }
        else
        {
            r.push_back(stoi(h2));
            c.push_back(h1);
        }
    }
    for(int i=0;i<r.size()-1;++i)
    {
        for(int j=1;j<r.size()-i;++j)
        {
            if(r[j]<r[j-1])
            {
                swap(r[j],r[j-1]);
                swap(c[j],c[j-1]);
            }
        }
    }
    for(string &i:c) cout << i << endl;
    return 0;
}
