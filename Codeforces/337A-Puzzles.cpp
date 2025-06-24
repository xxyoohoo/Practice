#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int s,p,a[1000];
    cin >> s >> p;
    for (int i=0;i<p;++i) cin >> a[i];
    sort(a,a+p);
    int least=a[s-1]-a[0];
    for (int i=1;i<=p-s;++i)
    {
        if (a[i+s-1]-a[i]<least) least=a[i+s-1]-a[i];
    }
    cout << least << endl;
    return 0;
}