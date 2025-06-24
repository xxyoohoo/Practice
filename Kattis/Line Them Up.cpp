//https://open.kattis.com/submissions/13901801
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i=0;i<n;++i)cin >> a[i];
  vector<string> i(a), d(a);
  sort(i.begin(),i.end());
  sort(d.rbegin(),d.rend());
  if (a==i) cout << "INCREASING" << endl;
  else if (a==d) cout << "DECREASING" << endl;
  else cout << "NEITHER" << endl;
  return 0;
}
