//https://open.kattis.com/submissions/13793679
#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int n,lim,x,c=0,ans=0;
    string s;
    cin >> lim >> n;
    for(int i=0;i<n;++i)
    {
        cin >> s >> x;
        if(s=="enter" && c+x<=lim)c+=x;
        else if(s=="enter" && c+x>lim) ans++;
        else if(s=="leave") c-=x;
    }
    cout << ans << endl;
}
