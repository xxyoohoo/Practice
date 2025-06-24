#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,a;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a;
        if(a%10-(a/1000+a/100%10+a/10%10)>0)
           sum++;
    }
    cout << sum << endl;
}
