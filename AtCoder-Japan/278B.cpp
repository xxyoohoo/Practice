#include <iostream>
using namespace std;

bool is24(int h,int m) 
{
    if(h<=23&&m<=59) return 1;
    return 0;
}
bool mj(int h,int m) {
  int A=h/10, B=h%10, C=m/10, D=m%10, AC=A*10+C, BD=B*10+D;
  return is24(AC, BD);
}
int main() {
  int H,M;
  cin >> H >> M;
  while (true) 
  {
    if(mj(H,M)){cout << H  << " " << M; return 0; }
    M+=1;
    H+=M/60;
    M%=60;
    H%=24;
  }
  return 0;
}