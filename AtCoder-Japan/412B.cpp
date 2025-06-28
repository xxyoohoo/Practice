#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=1;i<s1.length();++i)
    {
        if(isupper(s1[i]))
        {
            bool valid=0;
            for(int j=0;j<s2.length();++j)
            {
                if(s2[j]==s1[i-1]) valid=1;
            }
            if(!valid)
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}
