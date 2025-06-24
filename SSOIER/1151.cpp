#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

bool isprime (int n)
{
  for(int i=2;i<=n-1;i++) 
  {
      if(n%i==0)
        return false;
  }
  return true; 
}
int main ()
{
    int n,sum=0;
    cin >> n;
    for (int i=2;i<=n;i++){
        if (isprime(i)){
            sum=sum+1;
        }
    }
    cout << sum;
}
