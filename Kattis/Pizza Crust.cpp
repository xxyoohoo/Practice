// /https://open.kattis.com/submissions/13834364
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;
    printf("%.7f",((x-y)*(x-y)*100)/(x*x));
    return 0;
} 
