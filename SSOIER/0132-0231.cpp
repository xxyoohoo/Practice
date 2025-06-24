#include<iostream>
#include<cstring>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
  long long a1,a2,a3;
  a1=a2=1;
  cout  << a1 << " ";
  cout  << a2 << " ";
  for (int i=1;i<=15;i++)
  {
    a3=a1+a2;
    cout << a3 << " "; 
    a1=a2;
    a2=a3;    
  }
  return 0;
}
