//https://open.kattis.com/challenge/ms4bp7p4/submissions/17583311
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--)
    {
        int ferrylength, m;
        cin >> ferrylength >> m;
        ferrylength *=100;
        queue<int> left, right;
        for(int i=0;i<m;++i)
        {
            int car;
            string side;
            cin >> car >> side;
            if(side=="left") left.push(car);
            else right.push(car);
        }
        int ans=0, curside=0;
        while(!left.empty() || !right.empty())
        {
            int space=ferrylength;
            if(curside==0)
            {
                while(!left.empty() && left.front() <=space)
                {
                    space-=left.front();
                    left.pop();
                }
            }
            else
            {
                while(!right.empty() && right.front() <=space)
                {
                    space -=right.front();
                    right.pop();
                }
            }
            ++ans;
            curside^=1;
        }

        cout << ans << '\n';
    }

    return 0;
}
