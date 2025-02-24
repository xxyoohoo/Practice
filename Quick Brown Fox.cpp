//https://open.kattis.com/submissions/15515861
//https://open.kattis.com/submissions/15515859
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int n,b=0;
    set<char> a;
    cin >> n;
    getline(cin,s);
    for(int i=0;i<n;++i)
    {
        getline(cin,s);
        a.clear();
        b=0;
        for(int j=0;j<s.length();++j) if(isalpha(s[j])) a.insert(tolower(s[j])); 
        for(int j=1;j<=26;++j)
        {
            if(a.count(char('a'+(j-1)))==0)
            {
                if(b==0){cout << "missing ";b=1;}
                cout << char('a'+(j-1));
            }
        }
        if(b==0) cout << "pangram";
        cout << endl;
    }
    return 0;
}
