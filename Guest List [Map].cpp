//https://open.kattis.com/submissions/17583418
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string,int> names;
    for(int i=0;i<n;++i)
    {
        char c;
        string s;
        cin >> c >> s;
        
        if(c=='?') cout <<(names[s]>0?"Jebb\n":"Neibb\n");
        else if(c=='+') ++names[s];
        else
        {
            if(names[s] > 0)
            {
                --names[s];
                if(names[s]==0) names.erase(s);
            }
        }
    }

    return 0;
}
