#include<iostream>
using namespace std;
int main() 
{
  int a,b;
  cin >> a >> b;
  for (int i=0;i<a;i++) 
  {
    string s(b, '.');
    for (int j=0;j<b;j++) 
    {
      int x;
      cin >> x;
      if (x != 0) s[j]='A'+x-1;
    }
    cout << s << endl;
  }
}