#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
  double a=1,sum=1,i=1,n;
  cin >> n;
  for(i=1;i<=n;i++)
  {
    a=1;
    for(int j=1;j<=i;j++)
    {
      a=a*j;
    }
    sum+=1.0/a;
  }
  printf("%.10lf",sum);
}
