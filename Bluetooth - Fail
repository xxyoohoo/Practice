//https://open.kattis.com/submissions/15497166
#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool ul[8]={1},ur[8]={1},ll[8]={1},lr[8]={1},l=0,r=0;
    char a,b,x;
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
    {
        cin >> a >> b >> x;
		if(x=='b')
        {
            if(isdigit(a))r=1;
			else l=1;
			if(l&&r)
            {
				cout << 2;
				return 0;
			}
		}
		else if(a=='-') ll[b-'1']=0;
		else if(a=='+') ul[b-'1']=0;
		else if(b=='-') lr[a-'1']=0;
		else if(b=='+') ur[a-'1']=0;
	}
	if(!l && count(ll,ll + 8,1) && count(ul,ul + 8,1)) cout << 0;
	else if(!r && count(lr,lr + 8,1) && count(ur,ur + 8,1)) cout << 1;
	else cout << 2;
	return 0;
}
