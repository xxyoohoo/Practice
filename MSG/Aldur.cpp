#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    cin >> n >> x;
    y=x;
    for(int i=1;i<n;++i)
    {
        cin >> x;
        if(x<=y) y=x;
    }
    cout << y;
}
