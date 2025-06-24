//https://open.kattis.com/submissions/13696254
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,y,z,a=0,total=0;
    while(cin>>n)
    {
        if(n!=-1)
        {
            a=0;
            for(int i=1;i<=n;++i)
            {
                cin >> y >> z;
                total+=y*(z-a);
                a=z;
            }
            cout << total << " miles" << endl;
            total=0;
        }
    }
    return 0;
}
