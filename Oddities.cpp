//https://open.kattis.com/submissions/13686968
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        if(abs(x)%2==0) cout << x << " is even" << endl;
        else cout << x << " is odd" << endl;
    }
}
