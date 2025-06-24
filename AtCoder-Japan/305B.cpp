#include <iostream>
using namespace std;
int main() 
{
  char p, q;
  cin >>p>>q;
  int a[7] = {0,3,4,8,9,14,23};
  cout << abs(a[p-'A']-a[q-'A']) << endl;
}