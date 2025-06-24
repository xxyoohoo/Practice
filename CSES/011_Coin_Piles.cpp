#include <bits/stdc++.h>
using namespace std;
int main()
{
	// 1*x+2*y=a
	// 2*x+1*y=b
	// x=(2*b-a)/3
	// y=(2*a-b)/3
	int n,a,b;
	cin >> n;
	for(int i=0;i<n;++i)
	{ 
		cin >> a >> b;
        if ((2*a-b)%3==0||(2*a-b)>=0||(2*b-a)%3==0 ||(2*b-a)>=0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
