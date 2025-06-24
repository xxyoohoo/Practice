//https://open.kattis.com/submissions/15515690
#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<string, string> tm({
    {"A", ".-"},   {"B", "-..."}, {"C", "-.-."}, {"D", "-.."},  {"E", "."},
    {"F", "..-."}, {"G", "--."},  {"H", "...."}, {"I", ".."},   {"J", ".---"},
    {"K", "-.-"},  {"L", ".-.."}, {"M", "--"},   {"N", "-."},   {"O", "---"},
    {"P", ".--."}, {"Q", "--.-"}, {"R", ".-."},  {"S", "..."},  {"T", "-"},
    {"U", "..-"},  {"V", "...-"}, {"W", ".--"},  {"X", "-..-"}, {"Y", "-.--"},
    {"Z", "--.."}, {"_", "..--"}, {",", ".-.-"}, {".", "---."}, {"?", "----"},
  });
  map<string, string> fm;
  for (auto [i, code]: tm) fm[code]=i;
  string c;
  while (getline(cin, c))
  {
    string mc,x,s;
    for (char i:c)
    {
      string s2=tm[string(1, i)];
      mc+=s2;
      s+=to_string(s2.size());
    }
    reverse(s.begin(), s.end());
    int z=0;
    for (char n:s)
    {
      int y=n-'0';
      string s2;
      while (y--)
      {
        s2+=mc[z];
        z++;
      }
      x+=fm[s2];
    }
    cout << x << endl;
  }
  return 0;
}
