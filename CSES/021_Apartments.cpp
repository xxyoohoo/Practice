#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,a[200000],b[200000],ans=0;
	cin >> n >> m >> k;
	for (int i=0;i<n;++i) cin >> a[i];
	for (int i=0;i<m;++i) cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0;
	while (i<n&&j<m) 
	{
		if (abs(a[i]-b[j])<=k) 
		{
			++i;
			++j;
			++ans;
		} 
		else 
		{
			if (a[i]-b[j]>k) ++j;
			else ++i;
		}
	}
	cout << ans <<endl;

}