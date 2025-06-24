#include <iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
int main()
{
    int a,i=1,j;
    double sum =1;
    cin >> a;
    for(;i<=a;++i)
    {
      double b=1.0;
      for(j=1;j<=i;++j){
          b*=j;

      }
    sum+=1.0/b;
    }
    printf("%.10f",sum);
}
