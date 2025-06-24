//https://open.kattis.com/submissions/16896794
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	string skl, team;
	vector<string> s;
	vector<string> t;
	cin >> n;
	for (int i=0;i<n;++i)
    {
		cin >> skl >> team;
		if (find(s.begin(),s.end(),skl)==s.end())
        {
			s.push_back(skl);
			t.push_back(team);
		}
	}

	for (int i=0;i<12;++i)cout << s[i] << " " << t[i] << endl;

	return 0;
}
