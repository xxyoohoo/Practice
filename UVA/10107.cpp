//https://vjudge.net/solution/60936371/wQiTin0nRkPq6BSeUirK
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void print()
{
    for(int i=0;i<v.size();++i) cout << v[i] << ' ';
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,i=0;
    //vector<int> v;
    while(cin >> x)
    {
        v.push_back(x);
        sort(v.begin(),v.end());
        //print();
        if(i==0) cout <<v[i] << endl;
        else if(i%2==0) cout << v[(i/2)] << endl;
        else if(i%2==1) cout << ((v[(i/2)])+(v[(i/2)+1]))/2 << endl;
        ++i;
    }
    return 0;
}
